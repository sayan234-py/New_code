<div align="center">

# ⚡ New_code

### A structured C++ practice repository — from first principles to control flow

<p>
  <img src="https://img.shields.io/badge/Language-C%2B%2B-00599C?style=for-the-badge&logo=cplusplus&logoColor=white"/>
  <img src="https://img.shields.io/badge/Level-Beginner→Intermediate-blue?style=for-the-badge"/>
  <img src="https://img.shields.io/github/last-commit/sayan234-py/New_code?style=for-the-badge&color=orange"/>
  <img src="https://img.shields.io/github/repo-size/sayan234-py/New_code?style=for-the-badge&color=success"/>
</p>

</div>

---

## 📖 About

**New_code** is my day-to-day C++ practice log — a growing collection of small, self-contained programs written while working through core language concepts. Every file targets one idea at a time: a data type, an operator, an I/O pattern, a control-flow construct. The goal isn't scale, it's precision — understanding *why* a line of code behaves the way it does before moving to the next topic.

Each exercise is self-documenting: the problem statement is printed by the program itself (often color-coded in the terminal), so you can run any file and immediately see what it's meant to demonstrate.

---

## 🗂️ Repository Structure

```
New_code/
├── chapter2/          # Fundamentals: variables, types, casting, operators
│   ├── first.cpp
│   ├── ex2.cpp … ex15.cpp
│
├── chapter3/           # I/O, strings, control flow, arrays & matrices
│   ├── ex1.cpp … ex19.cpp
│
├── ex1.cpp … ex5.cpp    # Quick standalone syntax drills
├── pr1.cpp, pr6–pr10.cpp # Extra practice problems
│
└── .github/workflows/    # CI workflow for automated builds
```

---

## 🧩 What's Inside

### Chapter 2 — Foundations
| Topic | File |
|---|---|
| Declaring & printing `int`, `float`, `char`, `bool` | `first.cpp` |
| Swapping two integers without a third variable | `ex2.cpp` |
| `bool` type coercion & predict-the-output | `ex3.cpp` |
| Area of a rectangle | `ex4.cpp` |
| Explicit typecasting | `ex5.cpp` |
| Character ↔ ASCII conversions | `ex6.cpp`, `ex7.cpp` |
| Area of a circle (hardcoded constants) | `ex8.cpp` |
| `x++` vs `++x` | `ex10.cpp` |
| Enums for days of the week | `ex11.cpp` |
| Celsius → Fahrenheit conversion | `ex12.cpp` |
| Swapping via arithmetic operators only | `ex13.cpp` |
| Profit / loss calculator | `ex14.cpp` |
| `sizeof` across numeric types | `ex15.cpp` |

### Chapter 3 — I/O, Strings & Control Flow
| Topic | File |
|---|---|
| Reading name & age, formatted greeting | `ex1.cpp` |
| `getline()` vs `cin >>` for strings | `ex1.cpp` |
| Student marksheet with `iomanip` formatting | `ex10.cpp` |
| `<cmath>` — Pythagorean third side | `ex12.cpp` |
| `if` / `else if` ladder | `ex13.cpp`, `ex18.cpp` |
| Ternary operator | `ex16.cpp` |
| Logical operators | `ex17.cpp` |
| Reading & summing space-separated integers | `ex3.cpp` |
| Age input validation | `ex4.cpp` |
| Matrix multiplication | `ex2.cpp` |

### Root-Level Drills
Short, single-purpose files (`ex1–ex5.cpp`, `pr1.cpp`, `pr6–pr10.cpp`) covering `cout` basics, ASCII art output, hardcoded arithmetic, and no-loop numeric printing — quick warm-ups between bigger topics.

---

## ▶️ Running a File

Each program is fully standalone. Compile and run any one directly with g++:

```bash
g++ chapter2/ex12.cpp -o ex12
./ex12
```

Or, on Windows with MinGW:

```bash
g++ chapter2\ex12.cpp -o ex12.exe
ex12.exe
```

No external dependencies — everything runs with a standard C++ compiler (C++11 or later recommended).

---

## ⚙️ Continuous Integration

This repo includes a `C/C++ CI` GitHub Actions workflow at `.github/workflows/c-cpp.yml`, which currently uses the default autotools-based template (`./configure && make`). Since these are standalone `.cpp` files rather than an autotools project, this step is a placeholder — swap it for a straightforward compile-check loop such as:

```yaml
- name: Compile all .cpp files
  run: |
    find . -name "*.cpp" -print0 | while IFS= read -r -d '' file; do
      echo "Compiling $file"
      g++ -std=c++17 -Wall "$file" -o /tmp/out
    done
```

---

## 🎯 Why This Repo Exists

- 🧠 Build muscle memory for core C++ syntax and semantics
- 🪜 Progress deliberately, chapter by chapter, instead of jumping to frameworks
- 🧪 Keep every exercise runnable and verifiable on its own
- 📈 Track growth over time as the chapter count increases

---

## 🙋 About Me

**Sayan Nandi** — Final-year BCA student, building a full-stack (MERN) skill set alongside core CS fundamentals like this one.

<p>
  <a href="mailto:nsayan520@gmail.com"><img src="https://img.shields.io/badge/Email-D14836?style=for-the-badge&logo=gmail&logoColor=white"/></a>
  <a href="https://linkedin.com/in/sayan-nandi-152581359"><img src="https://img.shields.io/badge/LinkedIn-0077B5?style=for-the-badge&logo=linkedin&logoColor=white"/></a>
  <a href="https://github.com/sayan234-py"><img src="https://img.shields.io/badge/GitHub-181717?style=for-the-badge&logo=github&logoColor=white"/></a>
</p>

---

<div align="center">
<i>⭐ If you find this useful as a C++ practice reference, consider starring the repo.</i>
</div>
