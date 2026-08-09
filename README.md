# 🔥 Fire and Smoke Detection System with Alarm using Arduino

## 📌 Project Overview

The Fire and Smoke Detection System is an Arduino-based safety system designed
to detect smoke and fire-related conditions at an early stage.

The system continuously monitors environmental conditions using sensors. When
an unsafe condition is detected, the Arduino activates an alarm and provides
an alert through the LCD display.

## 🎯 Objectives

- Early detection of smoke and fire-related conditions
- Provide immediate warning using a buzzer
- Display monitoring and alert information on an LCD
- Develop a low-cost and practical safety system
- Improve safety in residential and industrial environments

## 🛠️ Components Used

- Arduino Uno
- MQ-2 Smoke/Gas Sensor
- IR Flame Sensor
- DHT11 Temperature and Humidity Sensor
- Buzzer
- LED
- 16×2 I2C LCD
- Breadboard
- Jumper Wires

## ⚙️ Working Principle

1. The Arduino initializes the connected sensors and output devices.
2. The sensors continuously monitor the surrounding environment.
3. The Arduino reads the sensor values.
4. The measured values are compared with predefined safety limits.
5. When an unsafe condition is detected, the buzzer and LED are activated.
6. The LCD displays the alert information.
7. When the conditions return to normal, the system returns to normal monitoring.

## 🚨 Alert Condition

The supplied Arduino program uses:

- Temperature limit: **30°C**
- Gas sensor limit: **400**

If the temperature exceeds 30°C or the gas reading exceeds 400, the alert
condition is activated.

## 📊 Results

- Rapid detection of unsafe conditions
- Stable and consistent system response
- Audible warning through the buzzer
- Visual indication through LED and LCD

## 🌍 Applications

- Residential safety systems
- Commercial buildings
- Industrial fire monitoring
- Smart home safety systems
- IoT-based safety networks

## 🚀 Future Scope

- GSM module for SMS notifications
- Wi-Fi module for mobile alerts
- IoT cloud monitoring
- AI-based camera fire detection
- Solar-powered operation for remote areas

## 📷 Project Prototype

![Project Hardware](project_hardware.jpeg)

## 📄 Project Report

[Download Project Report](Fire_and_Smoke_Detection_System_Arduino_Project_Report.pdf)

## 💻 Source Code

The Arduino source code is available in:

`code.ino`

## 👩‍🎓 Project Team

**Atchaya G**  
**Sowmiya S**  
**Lalitha Sree P**  
**Janani N**

**Department:** Electrical and Electronics Engineering  
**VSB College of Engineering Technical Campus, Coimbatore**

## 🏁 Conclusion

The Arduino-based Fire and Smoke Detection System provides an affordable
and practical approach for early warning and safety monitoring. The system
combines sensor monitoring, alarm indication and LCD display to help identify
unsafe conditions quickly.

---

### 🔧 Technologies Used

**Arduino | Embedded C/C++ | MQ-2 | DHT11 | LCD | Sensors**
