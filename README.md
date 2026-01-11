#  IoT-Based LPG Gas Leak Detection & Safety System

---

## 1. Problem Statement
LPG gas cylinders are widely used in Indian households for cooking. Gas leakage,
faulty connections, or unattended stoves can lead to fire hazards, explosions,
and serious health risks. Most existing safety solutions rely on human attention
or local alarms, which may fail when users are not present.

---

## 2. Proposed Solution
We propose an IoT-based LPG gas safety system that continuously monitors gas
concentration and automatically responds to unsafe conditions.

The system is designed with:
- Local safety logic for immediate response
- Planned cloud connectivity for monitoring and alerts
- A non-invasive design compatible with existing LPG setups

The solution prioritizes **safety-first operation**, even without internet
connectivity.

---

## 3. Implementation Status

### 3.1 Implemented (Current Prototype)
- Gas detection using MQ-series gas sensor
- ESP32-based decision-making logic
- Local alert system using buzzer and LED
- Simulated gas cut-off mechanism
- Flow-based system design and documentation

### 3.2 Planned (Future Rounds)
- Wi-Fi connectivity using ESP32
- Cloud server for data logging and alerts
- Mobile notification system
- Physical gas cut-off using servo or solenoid valve
- Compact enclosure for household deployment

> Note: Cloud and Wi-Fi features are intentionally planned for later rounds to
> ensure hardware stability and safety logic correctness first.

---

## 4. System Architecture (High-Level Design)

### 4.1 Component Interaction Overview

### 4.2 Design Rationale
- Critical safety actions are handled locally by the ESP32
- Cloud services are used only for monitoring and notifications
- System remains functional even during internet failure

---

## 5. Scalability & Growth Handling
Each household operates an independent ESP32-based safety unit.

As usage increases:
- Multiple devices connect independently to the cloud
- Cloud infrastructure can scale horizontally
- Local safety logic ensures performance is unaffected by user growth
- Failure of one unit does not impact others

This design allows scaling from a single home to thousands of households.

---

## 6. Failure Handling & Reliability
The system follows safety-first principles:
- Local buzzer alerts work without Wi-Fi
- Gas cut-off logic is executed locally
- Internet is not required for emergency response
- Sensor warm-up and threshold logic reduce false alarms
- Manual reset and maintenance are possible in future versions

---

## 7. Team Contributions
- Saksham – Hardware component procurement and circuit assembly
- Anshika – Sensor testing and threshold tuning
- Siddharth – System design, architecture planning, flowcharts, and documentation

---

## 8. Conclusion
This project presents a practical and scalable approach to improving household
LPG safety. By combining local embedded intelligence with planned cloud
connectivity, the system ensures immediate hazard response while enabling future
monitoring and analytics.

The current phase focuses on system thinking, safety logic, and architecture
planning, forming a strong foundation for full implementation in subsequent
rounds.

## Simulation (ESP32 – Wokwi)

A functional ESP32 simulation was created to validate controller logic and
analog sensor behavior before full hardware implementation.

Wokwi Simulation Link:  
https://wokwi.com/projects/452860279625620481
