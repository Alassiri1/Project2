# ESP32 Web-Controlled Servo & LEDs

This project uses an ESP32 to control a servo motor and two status LEDs via a web page hosted directly on the board using Access Point (AP) mode.

## Hardware Connections

| Component | ESP32 Pin | Description |
| :--- | :--- | :--- |
| **Servo Signal** | GPIO 26 | Controls servo angle |
| **Green LED** | GPIO 27 | Indicates OPEN status |
| **Red LED** | GPIO 25 | Indicates CLOSE status |

## Wi-Fi Credentials

- **SSID:** `ESP32_Control`
- **Password:** `123456789`
- **Default IP:** `192.168.4.1`

## Required Libraries

- `WiFi.h`
- `ESP32Servo.h`

## How It Works

1. Upload `TheCode` to your ESP32.
2. Connect your mobile device or PC to the `ESP32_Control` Wi-Fi network.
3. Open a browser and navigate to `192.168.4.1`.
4. Click **OPEN** (Servo moves to 90°, Green LED ON) or **CLOSE** (Servo moves to 0°, Red LED ON).

## Repository Structure

```text
.
├── README.md               # Project documentation
├── TheCode                 # ESP32 Arduino sketch
├── Video for the task.mp4  # Video demonstration
└── simultion(Wokwi).jpg    # Wokwi simulation diagram
