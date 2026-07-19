# 4 Servo Motors Control - Sweep & Hold Task

## Project Description
An Arduino Uno project simulated in Tinkercad to control 4 servo motors simultaneously. The system executes two sequential actions:
1. **Sweep Phase:** All 4 servos move continuously back and forth (between 0° and 180°) for exactly 2 seconds.
2. **Hold Phase:** After 2 seconds, all servos instantly stop and hold a fixed position at 90°.

---

## Engineering Rationale

* **Breadboard Power Distribution:** Servos draw high current during movement. Wiring power and ground through the breadboard's rails mimics safe, realistic hardware design to prevent an Arduino brownout or damage.
* **PWM Pins Utilization:** Signal wires are connected to PWM-enabled pins (3, 5, 6, and 9) to ensure precise angular positioning control.
* **Non-Blocking Timer (`millis()`):** The code utilizes the built-in `millis()` timer instead of `delay()` to calculate the 2-second duration, ensuring the microcontroller keeps processing the servo sweep fluidly.
* **Execution in `void setup()`:** The main routine is written inside `setup()` instead of `loop()` so the 2-second sweep and subsequent 90° lock execute only once, remaining stable without looping indefinitely.

---

## Components Used
* 1x Arduino Uno R3
* 4x Positional Micro Servos
* 1x Small Breadboard
* Jumper Wires

---

## Circuit Connections

### 1. Power Rails:
* Arduino **5V** -> Breadboard **(+)** Positive Rail (Red)
* Arduino **GND** -> Breadboard **(-)** Negative Rail (Black)

### 2. Servo Connections:
* **Servo 1:** Ground -> (-) Rail | Power -> (+) Rail | Signal -> Pin **3**
* **Servo 2:** Ground -> (-) Rail | Power -> (+) Rail | Signal -> Pin **5**
* **Servo 3:** Ground -> (-) Rail | Power -> (+) Rail | Signal -> Pin **6**
* **Servo 4:** Ground -> (-) Rail | Power -> (+) Rail | Signal -> Pin **9**
