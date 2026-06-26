# 💡 Smart Lighting System Using ESP32 and LDR Sensor Module

## 📌 Project Overview

This project was developed as part of the **Embedded Systems & IoT Internship at Maincrafts** under **Task-3: Smart IoT Automation System**.

The Smart Lighting System automatically controls an LED based on the surrounding light intensity using an **ESP32 Development Board** and an **LDR Sensor Module (LM393 Based)**. The ESP32 continuously monitors the ambient light level, processes the sensor data, and turns the LED ON or OFF according to a predefined threshold. Real-time sensor readings and system status are displayed on the Serial Monitor.

---

## 🎯 Objective

To design and implement an automated lighting system that:

* Detects ambient light intensity using an LDR sensor.
* Automatically switches an LED ON in dark conditions.
* Turns the LED OFF in bright conditions.
* Displays live sensor values on the Serial Monitor.
* Demonstrates basic automation and IoT concepts using ESP32.

---

## 🛠 Hardware Components

* ESP32 Development Board
* LDR Sensor Module (LM393 Based)
* LED
* 220 Ω Resistor
* Jumper Wires
* Wokwi Simulator

---

## 💻 Software Used

* Arduino IDE
* Wokwi Online Simulator
* Embedded C/C++

---

## 🔌 Circuit Connections

### LDR Sensor Module

| Module Pin | ESP32 Pin |
| ---------- | --------- |
| VCC        | 3V3       |
| GND        | GND       |
| AO         | GPIO34    |

### LED

| LED         | ESP32                        |
| ----------- | ---------------------------- |
| Anode (+)   | GPIO2 through 220 Ω resistor |
| Cathode (-) | GND                          |

---

## ⚙️ Working Principle

The LDR sensor continuously detects the surrounding light intensity and sends analog values to the ESP32 through GPIO34.

The ESP32 compares the sensor value with a predefined threshold.

* If the light intensity is **below the threshold (dark environment)**, the LED is turned **ON**.
* If the light intensity is **above the threshold (bright environment)**, the LED is turned **OFF**.

The sensor readings and LED status are displayed on the Serial Monitor, enabling real-time monitoring of the system.

---

## ✨ Features

* Automatic lighting control
* Real-time light intensity monitoring
* Analog sensor data acquisition
* IF-ELSE based automation logic
* ESP32-based embedded system
* IoT-style monitoring using Serial Monitor
* Simulated using Wokwi

---

## 🌍 Applications

* Smart Home Lighting
* Automatic Street Lights
* Garden Lighting Systems
* Energy Saving Systems
* Building Automation
* Industrial Lighting Control

---

## 📚 Learning Outcomes

* ESP32 Programming
* Sensor Interfacing
* Analog-to-Digital Conversion (ADC)
* Embedded System Automation
* Decision-Making Using IF-ELSE Logic
* Real-Time Monitoring
* Fundamentals of IoT

---

## 🚀 Future Enhancements

* Integrate with ThingSpeak Cloud
* Add Blynk Mobile Dashboard
* Wi-Fi Based Remote Monitoring
* Cloud Data Logging
* Mobile Notifications

---

## 📷 Project Outputs

* Circuit Diagram
* Arduino Source Code
* Serial Monitor Output
* Working Demonstration

---

## 👨‍💻 Internship Information

**Internship:** Embedded Systems & IoT Internship

**Organization:** Maincrafts

**Task:** Task-3 – Smart IoT Automation System

---

## 👤 Author

**Sushanth Dubagunta**

B.Tech – Electronics and Communication Engineering (ECE)

Embedded Systems & IoT Intern at Maincrafts

---

⭐ If you found this project useful, feel free to fork the repository or leave a star!
