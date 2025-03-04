# Programmer for the ATTiny2/4/8 series.
These are the KiCad Files for programmers that use Arduino as ISP to program ATTinies. There is an Arduino Uno and an Arduino Nano version. There are headers for both the '5s and the '4s.


## TOC
- [TOC](#toc)
- [Convinient Links](#convinient-links)
- [Usage Guide](#usage-guide)
	- [Configuring the Arduino for In-System Programming:](#configuring-the-arduino-for-in-system-programming)
	- [Installing the AttinyCore:](#installing-the-attinycore)
	- [Programming the ATTiny:](#programming-the-attiny)
	- [Blink](#blink)
	- [Common Debugging Tips/FAQ:](#common-debugging-tipsfaq)
- [Parts Required](#parts-required)
- [The LED?](#the-led)
- [Pics or it didn't happen](#pics-or-it-didnt-happen)

## Convinient Links
 - [How to program an Attiny85](https://www.instructables.com/How-to-Program-an-Attiny85-From-an-Arduino-Uno/): This is mostly covered in this Readme tho.
 - [ATTiny 25/45/85 Pinout/Datasheet](https://ww1.microchip.com/downloads/en/devicedoc/atmel-2586-avr-8-bit-microcontroller-attiny25-attiny45-attiny85_datasheet.pdf)
 - [ATTiny 24/44/84 Pinout/Datasheet](https://ww1.microchip.com/downloads/en/DeviceDoc/doc8006.pdf)



## Usage Guide
This should be fairly simple to setup. You can read a general guide over [here](https://www.instructables.com/How-to-Program-an-Attiny85-From-an-Arduino-Uno/). All this PCB does is replace the wiring to make life easier.
I will be doing this in Arduino Legacy using [Damellis'](https://github.com/damellis/attiny) core. If you want to use 2.0 or [SpenceKonde's](https://github.com/SpenceKonde/ATTinyCore) core, you can do that too. Just make sure to configure it properly.

### Configuring the Arduino for In-System Programming:
You only need to do this once. If the programmer has already been set up you don't need to do this again.
 1. Open the ArduinoISP sketch from File > Examples > ArduinoISP.
 2. Correctly select the Arduino Uno/Nano as your board and the correct port.
 3. Make sure that the reset capacitor switch is facing the cap, otherwise it will mess with the programming.
 4. Upload!

### Installing the AttinyCore:
 1. Go to Arduino IDE > File > Preferences > Additional Boards Manager URLs.
 2. Add `https://raw.githubusercontent.com/damellis/attiny/ide-1.6.x-boards-manager/package_damellis_attiny_index.json` to the list.
 3. Open the Boards Manager from Tools > Board > Boards Manager.
 4. Search for `ATTinyCore` and install it.

### Programming the ATTiny:
 1. You will have to edit a bunch of options in `Tools`: Board, Processor, Clock, Port and Programmer.
 2. Board and Processor: Correctly select what ATTiny you are using(25/45/85/24/44/84)
 3. Clock: Unless you know what you are doing, select one of the Internal clocks.
 4. Port: Select the port that the Arduino is connected to.
 5. Programmer: Select `Arduino as ISP`.
 6. If this is the first time you are using that ATTiny, you may need to burn the bootloader. This is done by selecting `Burn Bootloader`.
 7. Use keyboard shortcut `Ctrl+Shift+U` to `Upload Using Programmer`.


Keep in mind that if you want to program and arduino after this ,you will need to change the programmer back to `AVRISP mkII` or whatever you were using.

### Blink
I have provided a sample blink sketch. If you find that the LED is blinking faster/slower than expected, you may need to change the clock speed. This is done by burning the bootloader again.

### Common Debugging Tips/FAQ:
 - If Arduino IDE cant find the Arduino Nano or you cant see a change in the port list, install the [CH340](https://learn.sparkfun.com/tutorials/how-to-install-ch340-drivers/all) driver.
 - If you can't upload the sketch, make sure that the programmer is set to `Arduino as ISP`.
 - If you are getting `avrdude: stk500_getsync() attempt 10 of 10: not in sync: resp=0x00`, this is usually a wiring issue or incorrect programmer selected.
 - If you are getting `avrdude: Yikes!  Invalid device signature.`, this is usually a wiring issue or incorrect ATTiny selected.

## Parts Required
 - 1x Arduino Nano/Uno
 - 1x Arduino Nano Header/Male Headers for the Uno
 - 2x 15-pin headers if you are using the Nano version(Optional)
 - 2x 7-pin headers + 2x 4-pin headers if you are using the Uno version(Optional)
 - 1x 10uF capacitor(elecrolytic/ceramic is fine)
 - 1x 14-pin DIP socket
 - 1x 8-pin DIP socket
 - 1x Switch
 - 1x 2x3 ICSP header(optional)
 - 1x LED (optional)
 - 1x 220 Ohm resistor (optional)

## The LED?
Yea, there is an LED connected to MISO. With that, you can have a startup script that helps you verify that your program successfully uploaded.

On an Attiny85: MISO is Pin 6(**PB1**)

On an Attiny84: MISO is Pin 8(**PB5**)

## Pics or it didn't happen
![alt text](nano%203D%20view.png)
![alt text](uno%203D%20view.png)

I will take an IRL pic later.