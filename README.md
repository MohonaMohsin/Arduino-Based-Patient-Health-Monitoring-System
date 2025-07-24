#  Patient Health Monitoring System

An Arduino-based embedded system that continuously monitors a patient's **heart rate**, **SpO2 (blood oxygen level)**, **temperature**, and **humidity**. Designed to support affordable, home-based and remote healthcare solutions.

---

##  Components Used

| Component                          | Quantity |
|-----------------------------------|----------|
| Arduino Uno                       | 1        |
| MAX30100 (Pulse & SpO2 Sensor)    | 1        |
| DHT11 (Temperature & Humidity)    | 1        |
| 20x4 LCD Display with I2C Module  | 1        |
| Jumper Wires                      | As needed |
| Enclosure Box, Paper & Glue       | As needed |

---

##  Features

- Real-time heart rate and oxygen saturation monitoring
- Temperature and humidity sensing
- Live output on a 20x4 LCD via I2C interface
- Compact, low-power, and cost-effective design

---

##  How It Works

1. The **MAX30100 sensor** detects heart rate and oxygen levels.
2. The **DHT11 sensor** records temperature and humidity from the environment.
3. The **Arduino Uno** reads data from these sensors in real-time.
4. Results are displayed on a **20x4 LCD screen** using the I2C interface for efficient wiring.
5. All components are mounted inside a small, enclosed setup for usability and portability.

---

##  Circuit Diagram

<!-- Image will appear here once added to images/ folder -->
<p align="center">
  <img src="https://github.com/MohonaMohsin/Arduino-Based-Patient-Health-Monitoring-System/blob/main/images/circuit_diagram.jpg" alt="Circuit Diagram" width="500">
</p>

<p align="center"><b>Figure 1:</b> Circuit diagram for the Patient Health Monitoring System.</p>

---

## 🛠️ Project Showcase

<!-- Image will appear here once added to images/ folder -->
<p align="center">
  <img src="https://github.com/MohonaMohsin/Arduino-Based-Patient-Health-Monitoring-System/blob/main/images/project_showcasing.jpg" alt="Project Showcase" width="700">
</p>

<p align="center"><b>Figure 2:</b> Final assembled system with fully integrated sensors, display, and enclosure.</p>

---

## 🚀 Future Enhancements

- IoT/cloud support for remote patient data monitoring
- Automatic alert system for abnormal readings
- Integration with electronic health records (EHR)
- Mobile application connectivity and encrypted data storage

---


