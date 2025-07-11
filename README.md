## 📋 Overview

This project simulates a **smart motorcycle helmet system** using C++. The system includes a Heads-Up Display (HUD), rider behavior tracking, and environmental alerts. It demonstrates object-oriented programming concepts such as classes, member functions, randomization, and control structures.

---

## 🧠 Key Concepts Covered

- **Classes and Objects**
- **Function design (parameter passing by value)**
- **Access modifiers (`public` and `private`)**
- **Random number generation (`rand()`, `srand()`)**
- **Conditionals and loops**
- **Modular design**

---

## 🔧 How It Works

There are **three main classes**:

### 1. `HelmetSystem`
Displays current speed, fuel level, and time in a simple HUD format.

### 2. `RiderBehavior`
Monitors how often the rider is speeding. If the rider goes over 70 mph three or more times, the system gives a safety warning.

### 3. `EnvironmentalAlerts`
Randomly generates alerts about the current weather and road conditions. It warns the rider if the road is not in good condition.

---

## 🧪 Program Flow

1. Random values are generated for:
   - Speed (0–99 mph)
   - Fuel level (20–99%)
2. Time is manually set (for example purposes).
3. The system:
   - Displays the HUD
   - Checks if the rider is speeding
   - Gives a weather alert
   - Gives a road condition alert

---

## 🚀 How to Run

1. Compile the program:
   ```bash
   g++ -o SmartHelmet FinalProgram.cpp
