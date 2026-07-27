# Preliminary Mechanical Design of a Quadruped Robot

This repository contains the initial mechanical design documentation for a four-legged quadruped robot. The primary objective of this project is to understand the mechanical fundamentals—including kinematics, weight distribution, and motor torque requirements—necessary to achieve stable standing and gait locomotion.

---

## 1 Chassis & Body Structure
Overview:** Designed as a simple rectangular box-like frame to housing internal components such as the microcontroller, battery, and drivers.
Suggested Materials:** Lightweight and high-rigidity plastics (e.g., 3D-printed PLA/ABS or Acrylic sheets) to minimize overall structural mass.

---

##  2 Leg Geometry & Architecture
Linkage Design:** Each leg consists of two main linkages (Thigh and Shin/Lower Leg) connected via revolute joints.
Optimization:** Leg mass distribution is shifted towards the upper joints to reduce lower-leg inertia during swing phases.

---

## 3 Joints & Degrees of Freedom (DoF)
Leg Configuration:** 4 Legs.
Degrees of Freedom per Leg:** 2 to 3 DoF.
Total System DoF:** 8 to 12 Actuators (Servo Motors) for multi-axis articulation.

---

##  4 Actuator Selection
Motor Type:** High-torque digital servo motors (e.g., MG996R or high-torque brushless servos).
Rationale:** Provides precise angular position control and sufficient holding torque to support the frame during static and dynamic stances.

---

##  5 Initial Torque Calculation
To estimate the worst-case static load on a hip joint when the robot balances on two legs:

$$\tau = F \times r = (m \times g) \times L$$

* **Estimated Total Mass ($m$):** $1.5 \text{ kg}$
* **Gravitational Acceleration ($g$):** $9.81 \text{ m/s}^2$
* **Moment Arm ($L$):** $0.12 \text{ m}$
* **Calculated Torque ($\tau$):** 

$$\tau = \left(\frac{1.5}{2}\right) \times 9.81 \times 0.12 \approx 0.88 \text{ N}\cdot\text{m} \quad (\approx 9 \text{ kg}\cdot\text{cm})$$

> **Note:** Applying a Safety Factor (SF) of $1.5$, the minimum required motor torque per joint is approximately **$13.5 \text{ kg}\cdot\text{cm}$**.

---

##  6 Stability & Center of Mass (CoM)
Center of Mass (CoM):** Positioned at the geometric center and kept low to improve passive mechanical stability.
Support Polygon:** During locomotion, the projected CoM remains inside the support triangle formed by the three grounded legs.

---

##  7 Locomotion & Gait Design
Gait Strategy (Crawl Gait):** Moves one leg at a time while keeping three legs on the ground to maintain continuous static stability. 
Trot Gait (Optional):** Moves diagonal pairs of legs simultaneously for faster locomotion.

---

##  8. Anticipated Mechanical Challenges & Solutions
1. Instability during leg transition:**
   Solution:* Adjust motor speeds and optimize weight distribution across the chassis.
2. Servo overheating under continuous holding load:**
   Solution:* Select motors with higher torque ratings and implement mechanical linkage advantage.
3. Foot slippage on smooth surfaces:**
   Solution:* Attach high-friction rubber pads/grips at the end-effectors (feet).
