# Potentiometer Task

Welcome to the Potentiometer Task! This task demonstrates how to use a potentiometer with a microcontroller. A potentiometer, also known as a pot, is a variable resistor that can be used to control the voltage or current in a circuit. 

## Introduction

The Potentiometer task aims to provide a practical example of interfacing a potentiometer with a microcontroller to control brightness. Potentiometers are commonly used in electronic circuits for various purposes, such as volume control, dimming lights, and adjusting motor speed.

## How it Works

The task works by using the potentiometer also known as the knob of the potentiometer is turned, its resistance changes, which in turn changes the voltage at its output pin. The microcontroller reads this voltage and adjusts the brightness.

## Getting Started

### Components Required

To build this task, you will need the following components:

- Arduino board (e.g., Arduino Uno)
- Potentiometer
- Breadboard
- Jumper wires

### Steps

Follow these steps to set up the circuit:

1. Connect one end of the potentiometer to 5V and the other end to GND.
2. Connect the middle pin of the potentiometer to an analog pin on the Arduino, such as A0.

| Arduino       | Potentiometer  |
| ------------- | -------------- |
| 5V            | Left           |
| A0            | Wiper          |
| GND           | GND            |

## Connection

A visual representation of the circuit connection is provided in the circuit diagram below:

![screen-gif](https://github.com/ItsRawanMoha/Potentiometer/blob/main/Potentiometer.png)

## Output

Once the circuit is set up and the code is uploaded to the Arduino board, you can adjust the potentiometer's knob to change the brightness of the LED.

## Code
```
// Define the analog pin connected to the potentiometer
const int potPin = A0;

void setup() {
  // Initialize serial communication
  Serial.begin(9600);
}

void loop() {
  // Read the value from the potentiometer
  int sensorValue = analogRead(potPin);

  // Print the sensor value to the serial monitor
  Serial.println(sensorValue);

  // Delay a short time to stabilize readings
  delay(100);
}
```

## Pictures

<img src="https://github.com/ItsRawanMoha/Potentiometer/blob/main/PotentiometerP.jpeg" alt="Alt text" width="400" height="400">  ![screen-gif](https://github.com/ItsRawanMoha/Potentiometer/blob/main/PotentiometerG.gif)

## Conclusion

The Potentiometer task provides a practical demonstration of how to use a potentiometer with a microcontroller to control the brightness. 
