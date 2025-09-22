# Smart Helmet using Arduino

A **Smart Helmet project** designed for safety. It ensures that the rider:  
1. **Wears the helmet** before starting the bike.  
2. Is **not drunk** (alcohol sensor).  
3. Alerts in case of an **accident** using a vibration sensor.  

This project can be extended with **GPS + GSM** modules for accident location tracking.

---

## 📌 Features
- Helmet detection using switch sensor.  
- Alcohol detection using MQ3 sensor.  
- Accident detection using vibration sensor.  
- Buzzer alert for unsafe conditions.  
- Can be integrated with **ignition system** of a two-wheeler.  

---

## 🛠️ Components Required
- Arduino UNO/Nano  
- MQ3 Alcohol Sensor  
- Vibration Sensor (SW-420)  
- Push Button / Switch (helmet detection)  
- Buzzer  
- Jumper Wires & Breadboard  

---

## ⚡ Circuit Connections
| Component         | Arduino Pin |
|-------------------|-------------|
| Helmet Switch     | D2          |
| MQ3 Alcohol Sensor| A0          |
| Vibration Sensor  | D3          |
| Buzzer            | D7          |

---

## 🚀 Getting Started
1. Clone the repo:
   ```bash
   git clone https://github.com/yourusername/Smart-Helmet.git
   ```
2. Open `src/smart_helmet.ino` in Arduino IDE.  
3. Upload to Arduino.  
4. Test with switch, alcohol sensor, and vibration sensor.  


