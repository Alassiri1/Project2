AI & Image Recognition Task

This repository contains the documentation and implementation of the image recognition task for the robot dog project. The model is trained to classify images into two categories (Dog and Cat) using Google's Teachable Machine and deployed via a Python script.

---

## Task Overview
1. Model Training: Trained a deep learning model to differentiate between two classes using `Teachable Machine by Google`.
2. Export Format: Exported the trained weights into TensorFlow `Keras` format (`.h5` file).
3. Script Execution: Developed a Python script to load the model, process an input image, and predict the correct class with a confidence score.

---

## Files Included in this Branch
keras_model.h5`: The trained Keras deep learning model weights.
`labels.txt`: Contains the classification labels (`0 dog`, `1 cat`).
`Python_Script.py`: The Python execution script used to run the inference.
`The Output Screenshoot.png`: A screenshot showing the successful classification output.

---

## Step-by-Step Implementation

### Step 1: Model Training & Export
Gathered dataset samples for both **Dog** and **Cat** classes.
Trained the model using Google's Teachable Machine framework and evaluated its performance.
Downloaded the optimized model using the **TensorFlow -> Keras** conversion type.

### Step 2: Environment Setup & Code Development
The environment was set up using **Google Colab** to leverage cloud-based execution.
The Python script utilizes libraries such as `keras`, `PIL` (Pillow) for image manipulation, and `numpy` for array operations.
The script resizes the input image to $224 \times 224$ pixels (matching the model's required input shape) and converts it into a numpy array for processing.

### Step 3: Model Inference & Output
The model successfully loaded the local weights (`keras_model.h5`) and tested an external image (`dg2.png`).
Result: The model accurately predicted the class **"dog"** with a confidence score of **82.77%**.
