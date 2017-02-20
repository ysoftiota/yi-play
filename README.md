# YSoft IOTA Play
![IOTA Play](https://github.com/ysoftiota/yi-play/blob/master/IOTA%20Play.png)

## What is YSoft IOTA Play?

YSoft IOTA Play is [Arduino Zero](https://www.arduino.cc/en/Main/ArduinoBoardZero) ([Arduino M0](http://www.arduino.org/products/boards/arduino-m0)) clone with the following improvements:
* Two user LEDs
* Two user buttons
* Onboard Temperature + Humidity sensor [Silicon Labs SI7006-A20](https://www.silabs.com/products/sensors/humidity-sensors/Pages/si7013-20-21.aspx)
* Onboard 3 axis accelerometer [STM LIS3DE](http://www.st.com/en/mems-and-sensors/lis3de.html)
* Onboard crypto chip with ECC and RNG [Atmel ATECC508A](http://www.atmel.com/devices/atecc508a.aspx)
* Onboard ISM 868MHz transceiver [HopeRF RFM69](http://www.hoperf.com/rf_transceiver/modules/RFM69HW.html)
* 5V tolerant I/O on selected digital pins
  * Voltage level translator with possibility to use 5V output voltage using external pull-up (for CMOS logic)
* Enhanced power supplies
  * Optimized for battery operation - extremely low self-power consumption of power supplies
  * Designed for 2xA, 2xAAA or other 3V alkaline cell operation (4V rechargeable lithium cells not supported)
  * <10uA complete board power consumption in standby (without power LEDs and peripheral voltages enabled)
  * 3.3V boost from 3V battery for core and peripherals
  * 3.3V peripheral voltage can be powered down in standby
  * 5V boost from 3V battery that can be powered down in standby
  * USB Host mode 5V supported in battery mode operation
* Manual switch between battery and USB/Power jack operation
* Most of functionality can be changed by onboard 0R resistors
  * Disable not needed peripherals
  * Disable not needed power supplies
  * Power consumption optimization
  * Set I/O pin for user application
* Additional SPI1 defined on pins 10,11,12,13 where Arduino UNO has got SPI

### Moreover:
* YSoft IOTA Play comes with configurable 3D printable box [How To](https://github.com/ysoftiota/yi-play/blob/master/Box/README.md)
* YSoft IOTA Play can be developed in Arduino IDE [How To](https://github.com/ysoftiota/yi-play-arduino)
* YSoft IOTA Play is open source and open hardware [Schematics](https://github.com/ysoftiota/yi-play/raw/master/IOTA_PlayBoard_1.1.0/Project%20Outputs%20for%20IOTA_PlayBoard_1.1.0/Schematic%20Print/IOTA_PlayBoard_1.1.0%20-%20Schematic%20Prints%20-%20Devel.PDF), [3D PDF](https://github.com/ysoftiota/yi-play/raw/master/IOTA_PlayBoard_1.1.0/Project%20Outputs%20for%20IOTA_PlayBoard_1.1.0/3D%20View/IOTA_PlayBoard_1.1.0%20-%20Export%20PDF3D%20-%20Devel.PDF), [PCB print](https://github.com/ysoftiota/yi-play/raw/master/IOTA_PlayBoard_1.1.0/Project%20Outputs%20for%20IOTA_PlayBoard_1.1.0/PCB%20Print/IOTA_PlayBoard_1.1.0%20-%20PCB%20Prints%20-%20Devel.PDF), [Assembly drawing](https://github.com/ysoftiota/yi-play/raw/master/IOTA_PlayBoard_1.1.0/Project%20Outputs%20for%20IOTA_PlayBoard_1.1.0/PCB%20Print/IOTA_PlayBoard_1.1.0%20-%20Assembly%20Drawings%20-%20Devel.PDF). See [IOTA_PlayBoard_1.1.0](https://github.com/ysoftiota/yi-play/tree/master/IOTA_PlayBoard_1.1.0) for complete PCB project.

# Limitations compared to Arduino Zero
* IOTA Play does not contain embedded EDBG debugger chip. [Atmel ICE debugger](http://www.atmel.com/tools/atatmel-ice.aspx) must be obtained separately if debugging is needed.
* LED(s) are on different pin, so use LED_BUILTIN and PIN_LED1 PIN_LED2 defines for accessing LEDs
* Maximum input voltage is 14V - however it starts as low as 5V
* Lower Amp rating of 5V (300mA) and 3.3V (200mA) voltage regulators which should be enough for normal applications. Power supplies are optimized for low-power battery operation, not for power hungry applications.
* Some pins are used by internal peripherals ([pin mapping](https://github.com/ysoftiota/yi-play/wiki/PinMapping), [pin mapping PDF](https://github.com/ysoftiota/yi-play/blob/master/IOTA_PlayBoard_1.1.0/IOTA%20Play%20board%201.1.0%20pin%20mapping.pdf)), therefore they cannot be used by anything else. However given peripheral can be disconnected by desoldering 0R resistors.
* Only one hardware serial port is supported and SerialUSB (defined as Serial) is used for Arduino monitor. If you need to access the hardware serial port then use SERIAL_PORT_HARDWARE define.

![IOTA Play](https://github.com/ysoftiota/yi-play/blob/master/IOTA%20Play%20-%20top.jpg)
![IOTA Play](https://github.com/ysoftiota/yi-play/blob/master/IOTA%20Play%20-%20bottom.jpg)

