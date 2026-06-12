# Automated Sludge Detection System for Water Tanks Using ESP32-S3

## Overview

This project monitors water quality and sludge levels in a water tank using an ESP32-S3 microcontroller. A trimmer potentiometer is used to simulate sludge/turbidity levels during testing.

## Features

* Real-time sludge monitoring
* Green LED indication for good water quality
* Red LED indication for poor water quality
* Piezo buzzer alert system
* ESP32-S3 based implementation

## Hardware Used

* ESP32-S3
* Trimmer Potentiometer
* Green LED
* Red LED
* Piezo Buzzer
* 220Ω Resistors

## Software Used

* Arduino IDE
* Cirkit Designer
* GitHub

## Working

When the sensor value exceeds the threshold, the system activates the red LED and buzzer to indicate that the water tank requires cleaning. Otherwise, the green LED remains ON to indicate good water quality.
