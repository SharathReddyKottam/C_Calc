# 🧮 Calculator – Developer Guide

This folder contains the source code and build files for the **C_Calculator** project.  
It’s structured for clean compilation and easy extension.

---

## 📂 Folder Structure
```
Calc/
├── src/ # Source code (main: code.c)
├── build/ # Compiled binaries (ignored in git)
├── Makefile # Build automation
└── README.md # This developer guide
```

---

## ⚙️ Build Instructions
### With Makefile
```
make # compile
make run # compile + run
make clean # remove binaries
```
### Without Makefile
```
gcc src/code.c -o calc
./calc
```