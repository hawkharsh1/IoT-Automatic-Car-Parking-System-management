# 🚗 IoT Automatic Car Parking System

## 🔍 Overview

An intelligent IoT-based car parking system that displays real-time availability of parking slots and allows users to make reservations through a user-friendly web interface. The system improves operational efficiency and user convenience through automation and live monitoring.

## 💡 Features

- 📡 **Real-time Monitoring**: Detects vehicle presence using ultrasonic sensors.
- 🌐 **Web Interface**: Displays available parking slots and enables reservation.
- 🛂 **RFID Integration**: Identifies authorized vehicles for seamless access.
- 📊 **Live Database**: Stores and updates parking data in real time.

## 🛠️ Tech Stack

- **Microcontrollers**: ESP32 / Arduino
- **Sensors**: Infrared Sensors, RFID Modules
- **Frontend**: HTML, CSS, JavaScript
- **Backend/Database**: Firebase / MySQL
- **Communication**: UART / HTTP

## ⚙️ How the System Works

1. 🚗 **Entry Process**:
   - When a vehicle approaches the gate, **IR Sensor 1** detects it.
   - The **LCD display** prompts: `Please scan your RFID card`.
   - If the **RFID card is registered**, the **servo motor** opens the gate.
   - If the card is **not registered**, the LCD shows **"Access Denied"** and the gate stays closed.
   - After the vehicle passes **IR Sensor 2**, the gate **automatically closes after 2 seconds**.

2. 🅿️ **Parking Management**:
   - The system manages **4 parking slots**.
   - The number of slots can be **increased via software** changes.

3. 🚙 **Exit Process**:
   - At the exit, when a vehicle triggers **IR Sensor 2**, the **servo** opens the gate.
   - After passing **IR Sensor 1**, the gate closes **after 2 seconds**.

4. 🔋 **Power Stability**:
   - A **capacitor** helps maintain power stability during sensor and servo operations.

## 📈 Impact

- 📶 Improved user convenience and operational efficiency by **30%**
- ✅ Achieved **95% accuracy** in detecting slot occupancy and system response


