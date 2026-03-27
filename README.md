# Bidirectional People Counter (ESP32 & IR Sensors)

This project features a bidirectional people counter built with an **ESP32 microcontroller** and **infrared (IR) sensors** on a breadboard. The core detection logic, programmed in **C++** via the **Arduino IDE**, demonstrates rapid hardware prototyping and embedded software development for IoT applications. 

## Hardware Stack
* **Microcontroller:** ESP32 (ESP32-WROOM-32D module)
* **Sensors:** 2x HW-201 Infrared (IR) obstacle sensors
* **Development Environment:** Arduino IDE (C++)

## How it Works
By placing two IR sensors at an entrance, the system tracks the flow of people in real-time. The direction of movement (entry or exit) is determined by which sensor is triggered first (detects a `LOW` signal). The ESP32 updates the total headcount and prints the result to the Serial Monitor. 

*Note: The sensors are sensitive to strong sunlight, which can interfere with detection accuracy.*

## Source Code, Documentation & Simulation
* 💻 **Source Code:** The complete Arduino C++ code is available in the `MiniProiect.ino` file.
* ⚙️ **Wokwi Simulation:** [Test the circuit here](https://wokwi.com/projects/399026392703686657)
* 📄 **Full Report:** See the attached `docMiniProiect_925.pdf` for the complete Romanian documentation, pinouts, and schematics.
