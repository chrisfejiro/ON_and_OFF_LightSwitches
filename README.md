# Arduino Logic Gate Simulation – AND Gate with Switches and LEDs  

This project demonstrates how to simulate a **digital AND gate** using an Arduino, two switches (as inputs), and LEDs (as outputs). When **both switches are ON (HIGH)**, the output LED will turn ON. Otherwise, the output remains OFF.  

---

## 🛠 Features  
- Simulates a **two-input AND gate** using Arduino logic.  
- Two switches act as **inputs (A and B)**.  
- Three LEDs represent the **inputs (DA, DB)** and the **AND gate output (DOut)**.  
- Provides a simple digital logic learning experiment with Arduino.  

---

## 📋 Requirements  

### Hardware  
- Arduino board (Uno, Nano, or compatible)  
- 2x push buttons (for inputs A and B)  
- 3x LEDs (for output and inputs)  
- 3x 220Ω resistors (for LEDs)  
- 2x 10kΩ resistors (pull-down for switches)  
- Breadboard and jumper wires  

### Software  
- [Arduino IDE](https://www.arduino.cc/en/software)  

---

## ⚡ Pin Connections  

| Component      | Arduino Pin |
|----------------|-------------|
| Output LED     | 2 (DOut)    |
| Input A LED    | 3 (DA)      |
| Input B LED    | 4 (DB)      |
| Extra LED (unused) | 5 (ex, always LOW) |
| Switch A       | 7 (SA)      |
| Switch B       | 8 (SB)      |

⚠️ **Note:** Connect each switch between the Arduino pin and +5V, with a **10kΩ pull-down resistor** to GND.  

---

## 📂 Code Overview  

- **Pin Setup**  
  - `DOut` → Output LED.  
  - `DA`, `DB` → LEDs showing the states of inputs A and B.  
  - `SA`, `SB` → Switches acting as inputs.  
  - `ex` → Extra LED set permanently OFF.  

- **`setup()`**  
  Configures input/output pins and ensures the unused LED (`ex`) stays OFF.  

- **`loop()`**  
  - Reads switch states (`pinAState`, `pinBState`).  
  - Turns ON/OFF **input LEDs** (DA, DB) based on switch state.  
  - Performs **logical AND** (`pinOutState = pinAState && pinBState`).  
  - Displays result on **output LED (DOut)**.  

---

## ▶️ Usage  

1. Connect the circuit as described above.  
2. Upload the code to your Arduino.  
3. Press switches to simulate inputs:  

| Switch A | Switch B | Output LED (DOut) |
|----------|----------|--------------------|
| LOW      | LOW      | OFF                |
| HIGH     | LOW      | OFF                |
| LOW      | HIGH     | OFF                |
| HIGH     | HIGH     | ON                 |

4. Observe that the output LED only turns ON when **both switches are pressed**.  

---

## 🔮 Possible Improvements  

- Extend to **OR, NAND, NOR, XOR** logic gates.  
- Add **Serial Monitor output** to display states.  
- Use a **16x2 LCD** to show gate truth table in real time.  

---
