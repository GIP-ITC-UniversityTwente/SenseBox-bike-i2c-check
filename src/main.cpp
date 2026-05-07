#include <Arduino.h>
#include <Wire.h>

const char* getDeviceName(uint8_t address) {
    switch (address) {
        case 0x36: return "Battery Board";
        case 0x3D: return "OLED Display";
        case 0x40: return "HDC1080 Temp/Humidity";
        case 0x29: return "VL53L8CX ToF";
        case 0x69: return "SPS30 PM Sensor";
        default:   return nullptr;
    }
}

void setup() {
}

void loop() {
    Serial.begin(115200);
    Wire.begin();
    Serial.println("Scanning I2C bus...");

    for (uint8_t addr = 1; addr < 127; addr++) {
        Wire.beginTransmission(addr);
        if (Wire.endTransmission() == 0) {
            const char* name = getDeviceName(addr);
            if (name != nullptr) {
                Serial.printf("Found %s at addr. 0x%02X\n", name, addr);
            } else {
                Serial.printf("Found unknown device at 0x%02X\n", addr);
            }
        }
    }
    Serial.println("Scan complete");
    delay(15000);
}