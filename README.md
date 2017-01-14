# YSoft IOTA Play board
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
  * Extremely low self-power consumption of power supplies
  * Designed for 2xA, 2xAAA or other 3V alkaline cell operation (4V rechargeable lithium cells not supported)
  * <10uA complete board power consumption in standby (without power LEDs and peripheral voltages)
  * 3.3V boost for core and peripherals
  * 3.3V peripheral voltage can be powered down in standby
  * 5V boost that can be powered down in standby
  * USB Host mode 5V supported in battery mode operation
* Manual switch between battery and USB/Power jack operation
* Most of functionality can be changed by onboard 0R resistors
* Disable not needed peripherals
* Power consumption optimization

### Moreover:
* YSoft IOTA Play comes with configurable 3D printable box [How To](https://github.com/ysoftiota/yi-play/blob/master/Box/README.md)
* YSoft IOTA Play can be developed in Arduino IDE [How To](https://github.com/ysoftiota/yi-play-arduino)
* YSoft IOTA Play is open source and open hardware

# Limitations compared to Arduino Zero/M0
* IOTA Play does not contain embedded EDBG debugger chip. Atmel ICE debugger must be obtained separately.
* LED(s) are on different pin, so use LED_BUILTIN and LED1 LED2 defines for accessing LEDs
* Maximum input voltage is 14V - however it starts as low as 5V
* Lower power rating of 5V and 3.3V voltage regulators. Power supplies are optimized for low-power battery operation, not for power hungry applications.
* Some pins are used by internal peripherals ([pin mapping](https://github.com/ysoftiota/yi-play/wiki/PinMapping)), therefore they cannot be used by anything else. However given peripheral can be disconnected by desoldering 0R resistors.

![IOTA Play](https://github.com/ysoftiota/yi-play/blob/master/IOTA%20Play%20-%20top.png)
![IOTA Play](https://github.com/ysoftiota/yi-play/blob/master/IOTA%20Play%20-%20bottom.png)

