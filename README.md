# ESP32-Bluetooth-Speaker-DAC
This repository is for Bluetooth Speaker using esp32's dac pins (digital to analog converter) and a speaker. You can use this if you don't have an amplifier.

Components needed:
ESP32 (any)
Speaker 4 or 8 ohms

Connections:
ESP32's DAC pin 25 -------> Speaker's negative
Speaker's positive -------> ESP32's VIN or 5V

NOTE: Use darlington pair for high volume output. You need 2 transistors BC547 or 2N2222

If you're using darlinton pair use this connetions
ESP32's DAC pin 25 -------> 1k resistor
1k resistor -------> Base of 1st BC547
Collecter of 1st BC547 -------> ESP32'S VIN
Emitter of 1st BC547 -------> Base of 2nd BC547
Emitter of 2nd BC547 -------> ESP32's GND
Speaker's negative --------> 2nd BC547's Collecter
Speaker's positive -------> ESP32's VIN
