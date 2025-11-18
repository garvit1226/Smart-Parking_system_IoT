📌 Smart Parking System (IoT) — ESP32 + IR Sensors + Blynk

This project is an IoT-based Smart Parking System that detects whether parking slots are Occupied or Available using IR sensors, processes the data with an ESP32, and displays the live status on the Blynk IoT dashboard.

🚗 Project Overview

Parking difficulties lead to traffic congestion and time waste.
This project provides real-time parking slot monitoring through sensors and cloud connectivity.

🎯 Features

Detects occupied / free parking slots
Real-time update on Blynk IoT app
ESP32-based cloud communication
LED indicator for each slot
Simple & low-cost hardware setup

🧩 Components Used
Component	Quantity
ESP32	1
IR Sensor	2 
LED Bulb / Indicator	2
Breadboard	1
Jumper Wires	As required
Blynk IoT Platform	Cloud dashboard

⚙️ Working Principle

IR sensor detects presence/absence of a vehicle
ESP32 reads digital signal
Data is sent to Blynk cloud
Dashboard shows live slot status

🧵 Wiring / Connections
IR Sensor → ESP32
VCC → 3.3V
GND → GND
OUT → GPIO 34 (slot 1), GPIO 35 (slot 2)
LED1 → GPIO 25
LED2 → GPIO 26


📱 Blynk Dashboard

Two Value Display widgets
Connected using Virtual Pins V0 and V1

🌟 Features to Add in Future

Multi-slot expansion
Automatic gate control
Parking analytics dashboard
Notification alerts

👤 Author

Garbhit Maheshwari

📄 License

This project is open-source and available for anyone to explore, modify, and learn from.
