# Programmer for the ATTiny2/4/8 series.
This is a programmer that uses the Arduino as ISP to program the ATTinies. There are headers for both the '5s and the '4s.

### TOC
- [TOC](#toc)
- [How to use it](#how-to-use-it)
- [Parts Required](#parts-required)
- [The LED?](#the-led)

### How to use it
Read this guide on programming [Attinies](https://homemadehardware.com/guides/programming-an-attiny85/).
All this PCB does is replace the wiring to make life easier.

1. Plug your Arduino Nano into the Nano pin headers. The USB port is indicated by a smiley face lol.
2. Program your Arduino Nano with the ArduinoISP sketch.
3. Plug your ATTiny into the ATTiny pin headers.
4. Connect the Nano to your computer.
5. Open the Arduino IDE and select the correct board and programmer.
6. Upload your sketch.
Uh. yea. if you cant tell, I'm using Copilot here.

### Parts Required
 - 1x Arduino Nano
 - 1x Arduino Nano Header
 - 2x 15-pin headers
 - 1x 10uF capacitor(elecrolytic is fine)
 - 1x 14-pin DIP socket
 - 1x 8-pin DIP socket
 - 1x 2x3 ICSP header(optional)
 - 1x LED (optional)
 - 1x 220 Ohm resistor (optional)

### The LED?
Yea, there is an LED connected to MISO. With that, you can have a startup script that helps you verify that your program successfully uploaded.
On an Attiny85: MISO is Pin 6(**PB1**)
On an Attiny84: MISO is Pin 8(**PB5**)