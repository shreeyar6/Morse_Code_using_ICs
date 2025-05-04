# Morse Code Generator for numbers 0 to 9 using ICs

## Introduction
This project presents a Morse code generator system built using Arduino Nano, Bluetooth module (HC 05), and various integrated circuits (ICs) including 74147, 7404, 74154, 74LS30A, and 7447. The system allows users to input numbers from 0 to 9 via a Bluetooth serial controller app, which are then converted into Morse code and displayed on a seven-segment display.

## Components Used
- Arduino Nano
- Bluetooth Module (HC 05)
- 10 to 4 Priority Encoder (IC 74147)
- Not Gates (IC 7404)
- 4 to 16 Decoder (IC 74154)
- 8 Input NAND Gate (IC 74LS30A)
- Seven-Segment Display
- BCD to Seven-Segment Decoder (IC 7447)
- 5 LEDs

## Workflow
1. **User Input**: The user selects a number from 0 to 9 via the Bluetooth serial controller app.
   
2. **Data Transfer**: The selected number is transferred to the Arduino Nano through the Bluetooth module.

3. **Decimal to Binary Conversion**: The 10 to 4 Priority Encoder (IC 74147) converts the decimal input into binary. 

4. **Complementation**: Not gates (IC 7404) are utilized to complement the output, as it's an active low encoder.

5. **Binary to Morse Code Conversion**: The binary output serves as input to the 4 to 16 Decoder (IC 74154), which activates the corresponding NAND gates (IC 74LS30A) and LEDs to indicate Morse code. An LED ON indicates a dot, and an LED OFF indicates a dash.

6. **Display Output**: The result in decimal is displayed on the seven-segment display.

## Example
For instance, when the user selects the number 1, the output would be "00 111", which translates to Dot Dot Dash Dash Dash.

## Conclusion
This Morse code generator system provides an interactive way to convert numbers into Morse code using hardware components and Arduino programming. It serves as an educational tool for learning Morse code and demonstrates the integration of digital electronics with microcontrollers for practical applications.

## Few Snippets
![morse_code_image](https://github.com/satwikkamath/Morse_Code_Generator/assets/107809929/57ace2fc-d8fa-4827-8104-8ffdffba2a77)

