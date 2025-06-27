# 🤖 3-Sensor Line Follower Robot | Arduino + L298N
Here is the link to my Instructables https://www.instructables.com/Building-a-3-Sensor-Line-Follower-Robot-Arduino-L2/
This Repository will show you how to build a simple and efficient **line follower robot** using an Arduino Uno, L298N motor driver, and 3 digital IR sensors. This bot can follow a white line on a black background using basic sensor logic.

---

## 🛠️ Components Required

- Arduino Uno or Nano  
- 3x Digital IR Line Sensors  
- L298N Motor Driver  
- 2x BO Motors + Wheels  
- Robot Chassis  
- 6V–12V Battery Pack  
- Jumper Wires, Switch (optional)

---
## 🔌 Wiring

| Sensor       | Arduino Pin |
|--------------|-------------|
| Left Sensor  | D13         |
| Middle Sensor| D12         |
| Right Sensor | D11         |

| L298N Pin    | Arduino Pin |
|--------------|-------------|
| IN1 (LM1)    | D2          |
| IN2 (LM2)    | D3          |
| IN3 (RM1)    | D4          |
| IN4 (RM2)    | D5          |

> Enable Pins of L298N can be jumper connected to 5V

---

## 🤖 Behavior Logic

| LS | MS | RS | Action         |
|----|----|----|----------------|
| 0  | 1  | 0  | Move Forward    |
| 1  | 1  | 0  | Sharp Left      |
| 0  | 1  | 1  | Sharp Right     |
| 1  | 0  | 0  | Turn Left       |
| 0  | 0  | 1  | Turn Right      |
| 1  | 1  | 1  | Stop (junction) |
| 0  | 0  | 0  | Stop (lost)     |

---

## 👨‍💻 Code

Find the full Arduino sketch in https://app.arduino.cc/sketches/9d1ebf2f-3842-4707-9d72-56cfc71b0534?view-mode=preview

---
## 🧪 Testing
1. Upload the sketch to your Arduino
2. Power the system and place the bot on a line path
3. Adjust sensor position if needed
4. Monitor behavior via Serial Monitor

---
## 🛠️ Improvements

- Add PID control using analog sensors
- Implement obstacle avoidance
- Upgrade to maze-solving algorithm
---
