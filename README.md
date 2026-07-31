# Arduino Servo Control via Ultrasonic Sensor

A simple embedded system project that uses an Arduino Uno and an HC-SR04 Ultrasonic Sensor to trigger an SG90 Servo Motor based on real-time distance measurement.


## Components

* Microcontroller: Arduino Uno
* Sensor: HC-SR04 Ultrasonic Sensor
* Actuator: SG90 Servo Motor
* Prototyping: Breadboard & Jumper Wires


## Logic & Workflow

1. Distance Calculation: The ultrasonic sensor measures object distance using sound waves where Distance = (Time * 0.034) / 2.
2. Threshold Trigger: If object distance is less than or equal to 10 cm, the servo rotates smoothly to 90 degrees.
3. Reset: If the object moves away (greater than 10 cm), the servo smoothly returns to 0 degrees.
