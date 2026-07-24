# Real-Time Color Detection & Recognition

A Computer Vision application built with Python and OpenCV to detect and label primary colors (Red, Green, Blue) in real time using webcam input.

## Overview & Prerequisites

### Technical Stack
* **Language:** Python 3.x
* **Core Libraries:** `opencv-python`, `numpy`
* **Environment:** Anaconda (Conda Virtual Environment)
* **IDE:** Visual Studio Code (VS Code)

##  Installation & Setup

## Execution & Controls

1. Open the project folder in **VS Code**.
2. Run the main script:
python main.py

3. **Controls:**
* **Detection:** Position red, green, or blue objects in front of the camera to see bounding boxes and text labels.
* **Exit:** Press **`q`** or **`ESC`** to safely close the camera stream.

-## Pipeline & Methodology
* **Frame Capture:** Reads continuous video frames via `cv2.VideoCapture`.
* **Color Space Transformation:** Converts standard BGR frames into **HSV** space for enhanced stability under varying lighting conditions.
* **Color Masking:** Isolates target color spectrums using calibrated HSV threshold ranges (`cv2.inRange`).
* **Contour Extraction:** Identifies object boundaries (`cv2.findContours`), filters noise (contour area > 500), and draws labeled bounding rectangles (`cv2.rectangle`, `cv2.putText`).
