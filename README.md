# Dice Roll Game

This project is a simple C-based **dice rolling game** that evaluates common dice combinations such as:

- Three of a Kind  
- Four of a Kind  
- Full House  
- Two Pair  
- Small Straight  
- Large Straight  
- “CSlam” (all dice match)  
- Or no scoring combination  

The program rolls **five dice**, analyzes the results, and allows the user to reroll up to a set number of times.

---

## 🎲 Features

### **Dice Rolling**
- Rolls **5 dice**, each producing a value from **1 to 6**.
- Uses `rand()` seeded with the current time.

### **Combination Checking**
The program analyzes the dice to detect:

- **Three of a Kind**
- **Four of a Kind**
- **Full House**
- **Two Pair**
- **Small Straight** (4 sequential values)
- **Large Straight** (5 sequential values)
- **CSlam** (all dice identical)
- Or identifies that the roll contains **no valid combination**

### **Reroll System**
- Players may reroll up to **3 times** (defined by `NUMBEROFREROLLS`).
- After each roll, the program asks whether the user wants to roll again.

---

## 🧩 How It Works

### **1. RollDice()**
Randomly assigns values (1–6) to each die.

### **2. PrintRoll()**
Displays the current values of the dice with tabs between them.

### **3. HowManyFaces()**
Counts how many dice match a specific face value (used to evaluate combinations).

### **4. Combination Logic**
The program uses an array to track counts of each face (1–6) and then checks for patterns like:
- pairs  
- triples  
- sequences  
- matching sets  

---

## ⚙️ Constants

These can be modified to change gameplay behavior:

| Name               | Value | Description                        |
|--------------------|--------|------------------------------------|
| `NUMBEROFREROLLS`  | 3      | Max rerolls allowed                |
| `NUMBEROFFACES`    | 6      | Number of sides per die            |
| `NUMBEROFDICE`     | 5      | Number of dice rolled per turn     |

---

## 🚧 Known Issues / Bugs

This code includes several **common C logic errors**, especially in conditional checks:

- Using the **assignment operator (`=`)** instead of the **comparison operator (`==`)** inside `if` statements  
  → Causes many conditions to always evaluate as true.
- Sequence detection logic needs correction.
- Arrays are initialized incorrectly (e.g., `int dice[6] = {NUMBEROFDICE};` does not do what it might appear to).
- Reroll input handling may skip user input due to leftover newline characters.

If you want, I can produce a **fully corrected and optimized version** of this program.

---

## 🏁 Running the Program

Compile with:

```bash
gcc dice.c -o dice
