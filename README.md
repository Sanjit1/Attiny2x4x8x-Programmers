# Programmer for the ATTiny2/4/8 series.
This is a programmer that uses the Arduino as ISP to program the ATTinies. There are headers for both the '5s and the '4s.

## TOC
- [TOC](#toc)
- [Convinient Links](#convinient-links)
- [Usage Guide](#usage-guide)
	- [Configuring the Arduino Nano for In-System Programming:](#configuring-the-arduino-nano-for-in-system-programming)
	- [Installing the AttinyCore:](#installing-the-attinycore)
	- [Programming the ATTiny:](#programming-the-attiny)
	- [Blink](#blink)
- [Parts Required](#parts-required)
- [The LED?](#the-led)
- [Pics or it didn't happen](#pics-or-it-didnt-happen)

## Convinient Links
[How to program an Attiny85](https://www.instructables.com/How-to-Program-an-Attiny85-From-an-Arduino-Uno/)
[ATTiny 25/45/85 Pinout/Datasheet](https://ww1.microchip.com/downloads/en/devicedoc/atmel-2586-avr-8-bit-microcontroller-attiny25-attiny45-attiny85_datasheet.pdf)
[ATTiny 24/44/84 Pinout/Datasheet](https://ww1.microchip.com/downloads/en/DeviceDoc/doc8006.pdf)



## Usage Guide
This should be fairly simple to setup. You can read a general guide over [here](https://www.instructables.com/How-to-Program-an-Attiny85-From-an-Arduino-Uno/). All this PCB does is replace the wiring to make life easier.
I will be doing this in Arduino Legacy using [Damellis'](https://github.com/damellis/attiny) core. If you want to use 2.0 or [SpenceKonde's](https://github.com/SpenceKonde/ATTinyCore) core, you can do that too. Just make sure to configure it properly.

### Configuring the Arduino Nano for In-System Programming:
 1. Open the ArduinoISP sketch from File > Examples > ArduinoISP.
 2. Select Arduino Nano as the board, and whatever port you are using.
 3. Make sure the Arduino is not on the board, otherwise the capacitor between Reset and GND will mess with the programming.
 4. Upload!

### Installing the AttinyCore:
 1. Go to Arduino IDE > File > Preferences > Additional Boards Manager URLs.
 2. Add `https://raw.githubusercontent.com/damellis/attiny/ide-1.6.x-boards-manager/package_damellis_attiny_index.json` to the list.
 3. Open the Boards Manager from Tools > Board > Boards Manager.
 4. Search for `ATTinyCore` and install it.

### Programming the ATTiny:
 1. Correctly select what ATTiny you are using(25/45/85/24/44/84).
 2. Select the clock. Unless you know what you are doing, select one of the Internal clocks.
 3. Select the programmer as `Arduino as ISP`.
 4. If this is the first time you are using that ATTiny, you may need to burn the bootloader. This is done by selecting `Burn Bootloader`. You will also have to do this if you change the clock speed.
 5. Otherwise, just upload your sketch!

### Blink
I have provided a sample blink sketch. If you find that the LED is blinking faster/slower than expected, you may need to change the clock speed. This is done by burning the bootloader again.

## Parts Required
 - 1x Arduino Nano
 - 1x Arduino Nano Header
 - 2x 15-pin headers
 - 1x 10uF capacitor(elecrolytic is fine)
 - 1x 14-pin DIP socket
 - 1x 8-pin DIP socket
 - 1x 2x3 ICSP header(optional)
 - 1x LED (optional)
 - 1x 220 Ohm resistor (optional)

## The LED?
Yea, there is an LED connected to MISO. With that, you can have a startup script that helps you verify that your program successfully uploaded.
On an Attiny85: MISO is Pin 6(**PB1**)
On an Attiny84: MISO is Pin 8(**PB5**)

## Pics or it didn't happen
![alt text](3D%20view.png)

I will take an IRL pic later.