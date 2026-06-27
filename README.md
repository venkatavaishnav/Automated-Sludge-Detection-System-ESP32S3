# Automated-Sludge-Detection-System-ESP32S3

## Overview

The Automated Sludge Detection System is an IoT-based monitoring solution designed to detect sludge accumulation levels in water treatment tanks and storage systems. The system uses an ESP32 microcontroller to continuously monitor sensor values and provide visual and audible alerts when sludge levels exceed a predefined threshold.

This project improves monitoring efficiency and reduces the need for manual inspection.

---

## Features

- Real-time sludge level monitoring
- ESP32-based control system
- Green LED indication for normal condition
- Red LED indication for sludge detection
- Buzzer alert for high sludge levels
- Adjustable threshold using potentiometer
- Low-cost and easy-to-deploy design
- PCB designed using EasyEDA

---

## Hardware Components

| Component | Quantity |
|------------|----------|
| ESP32 NodeMCU | 1 |
| 10k Potentiometer | 1 |
| Red LED | 1 |
| Green LED | 1 |
| 220Ω Resistors | 2 |
| Buzzer | 1 |
| PCB | 1 |

---

## Circuit Connections

| Component | ESP32 Pin |
|------------|------------|
| Green LED | GPIO 22 |
| Red LED | GPIO 18 |
| Buzzer | GPIO 2 |
| Potentiometer Output | GPIO 35 |

---

## Working Principle

1. The potentiometer simulates sludge level sensor readings.
2. ESP32 continuously reads analog values from GPIO 35.
3. When the value exceeds the threshold:
   - Red LED turns ON
   - Buzzer turns ON
   - Green LED turns OFF
4. When the value is below the threshold:
   - Green LED turns ON
   - Red LED turns OFF
   - Buzzer turns OFF

---
## Circuit Diagram 
<img width="800" height="398" alt="cricuit diagram" src="https://github.com/user-attachments/assets/14c3142a-edad-478f-aa31-6211e7952faa" />

## PCB Design

The PCB was designed using EasyEDA.

### PCB Layout
<img width="1920" height="1020" alt="Screenshot 2026-06-13 193125" src="https://github.com/user-attachments/assets/7f34c54f-7e62-4c07-b5f7-c3597b4f0704" />
---
## Circuit Simulation Link

https://app.cirkitdesigner.com/project/7a4fab76-06d3-4a7d-aab9-a32f990dd914

## Software

The project is programmed using Arduino IDE and Embedded C.

### Libraries Used

```cpp
No external libraries required
