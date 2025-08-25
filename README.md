# Integrated Project: Python + C++

This repository contains two mini–projects developed in parallel to practice **programming fundamentals in C++ and Python**, plus a small integration exercise between both languages.

---

## 📂 Project Structure

Project/
│
├── Python/
│ ├── main.py
│ ├── inputs.py
│ ├── utilidades.py
│ └── datos.txt
│
└── C++/
└── Calculadora/
├── include/
├── src/
├── build/
└── programa.exe


## Python Project

- Input and save user data:
  - Name, age, height, and whether the user studies.
- Data stored in `datos.txt`.
- Options to read/reset data.
- Option **9** runs the C++ calculator.

---

## C++ Project — Calculator

- Menu with basic operations:
  1. Add
  2. Subtract
  3. Multiply
  4. Divide
  5. Check if a number is even
  6. Exit
- Reads user name from `datos.txt` and shows a personalized greeting.

---

## 🔗 Python ↔ C++ Integration

From Python, the C++ program can be executed using:

ruta_calculadora = os.path.join("C++","Calculadora","build","programa.exe")
os.system(ruta_calculadora)
This allows data entered in Python to be reused inside the C++ calculator.

⚙️ VSCode + MSYS2 Setup
Configured to:

Compile with g++ via MSYS2.

Run automatically after compilation.
