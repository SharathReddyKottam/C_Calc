# 🧮 C_Calc

A beginner-friendly **calculator project written in C**.  
Built as a learning project to practice C fundamentals like loops, conditionals, and functions.

---

## ✨ Features
- Addition, Subtraction, Multiplication, Division  
- Power (x^y)  
- Factorial  
- Input validation (invalid choice, division by zero)  
- Runs in a loop until user exits  

---

## 📂 Project Structure
C_Calc/
├── Calc/ # main project folder
│ ├── src/ # source code
│ │ └── code.c
│ ├── build/ # compiled output (ignored in git)
│ ├── Makefile # build automation
│ └── README.md # developer guide
└── README.md # this file (project overview)

## 🚀 Quick Start
Clone the repo and navigate into the project:
bash
git clone https://github.com/SharathReddyKottam/C_Calc.git
cd C_Calc/Calc


```
## Build & run:
make run

## 📖 Example
===== Simple Calculator =====
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Power (x^y)
6. Factorial
0. Exit
Enter your choice: 1
Enter two numbers: 5 3
Result: 8.00

## Manual Compilation

Without Makefile:

gcc src/code.c -o calc
./calc

## 🧮 Features

Addition, Subtraction, Multiplication, Division

Power (x^y)

Factorial

Runs in a loop until user exits

Error handling for invalid input & division by zero


## 📝 Notes for Developers

All source files should be placed in src/.

Compiled binaries are placed in build/.

Makefile ensures consistent builds and cleanup.

Extend the calculator by adding new cases in code.c and updating the menu.

