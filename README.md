# Smart Methods Simulation Task: L293D Motor Shield with DC Motors, Servo, and Ultrasonic Sensor

## Overview

This simulation project models a autonomous vehicle motion control system. It integrates four DC motors managed by an L293D Motor Driver Shield, a SG90 Servo Motor, and an HC-SR04 Ultrasonic Sensor for obstacle detection and dynamic direction changes.

---

## Hardware Components

Arduino Uno board
L293D Motor Driver Shield
4 DC Motors
1 SG90 Servo Motor
1 HC-SR04 Ultrasonic Sensor

---

## Functional Requirements

Part 1: DC Motors Motion Control
The four DC motors are programmed through the L293D driver to execute a continuous timed sequence:

1. Move forward for 30 seconds.
2. Reverse direction and move backward for 60 seconds.
3. Alternate turning right and left for 60 seconds.

Part 2: Obstacle Detection and Avoidance
The ultrasonic sensor is paired with the servo motor to monitor distance in real time:

1. Continuous distance scanning in front of the vehicle.
2. If an obstacle is detected at a distance of 10 cm or less, all DC motors immediately stop.
3. The system changes its movement direction to clear the path.

---

## Circuit Pinout Summary

Component: 4 DC Motors
Connection: L293D Motor Terminals M1, M2, M3, M4
Function: Drive vehicle movement in forward, backward, left, and right directions

Component: SG90 Servo Motor
Connection: Servo Headers on L293D Shield
Function: Directional steering and scan angle positioning

Component: HC-SR04 Ultrasonic Sensor
Connection: Digital Pins (Trig and Echo)
Function: Measure obstacle distance in centimeters
