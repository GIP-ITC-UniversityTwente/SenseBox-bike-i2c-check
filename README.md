# SenseBox-bike-i2c-check
Code to identify faulty connections in SenseBoxBike. The code performs serial prints to identify which sensors are successfully connected to the sensebox bike MCU.

## How to use
1. Clone this repository to the device where you will be troubleshooting the SenseBox bike.

2. Install VS Code and the PlatformIO IDE extension on VS code [link](https://marketplace.visualstudio.com/items?itemName=platformio.platformio-ide)

3. Go to PlatformIO Home and click on "Open Project" and open the repository folder you cloned in step 1.

4. Connect your Sensebox Bike to laptop using USB cable and on VS code and select the corresponding port on the "Set upload/monitor/test port". 
This is the right most plug icon at the status bar.

![alt text](images/image-1.png)

5. Upload the code to the SenseBox using the right arrow on the status bar. The SenseBox's light should flash during the upload.

![alt text](images/image-2.png)

6. Open the serial monitor by click on the button shown below in the status bar.
![alt text](images/image-3.png)

7. If the code was successfully uploaded to the SenseBox, 
the serial print will show prints of which sensors are successfully connected to the SenseBox. 
At the moment these sensors are identified by the code:
- "Battery Board"
- "OLED Display"
- "HDC1080 Temp/Humidity"
- "VL53L8CX ToF
- "SPS30 PM Sensor"

If the sensors are connected by cable to the MCU but is not showing on the serial monitor it means it was not successfully connect. In this case, try unplugging and plugging the specific cable or replace cable. This can be done while the sensebox is still connected to the laptop.