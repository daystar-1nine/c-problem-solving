# C Problem‑Solving Repository

## Overview 🌟

This repository contains a curated collection of **self‑contained C programs** that illustrate fundamental programming concepts.  Each source file solves a small, well‑defined problem such as:

- Basic arithmetic and expressions
- Control‑flow constructs (loops, conditionals, recursion)
- Pointer manipulation and dynamic memory allocation
- String handling and text processing
- Structure definitions and usage
- Simple file I/O operations

The code is intentionally **compact and beginner‑friendly** – perfect for students, interview preparation, or anyone looking to refresh core C knowledge.

---

## Directory Structure 📁

```
C Programming/
├─ Instructions, Expressions & Operators/      # Simple math & operator demos
├─ Iteration & Loop Control Structure/       # Loops, primes, GCD, etc.
├─ Pointers/                                 # Pointer basics, min‑max, etc.
├─ Strings/                                   # String manipulation utilities
├─ Structures/                                # Struct examples and nested structs
├─ Variables, Data Types & InputOutput/       # Basic I/O and datatype demos
├─ Dynamic Memory Allocation/                 # malloc / calloc / realloc examples
├─ File InputOutput/                          # File read/write utilities
├─ README.md                                  # ← This file
└─ list.txt                                   # auto‑generated file list (optional)
```

---

## Getting Started 🚀

### Prerequisites

- A C compiler (e.g., `gcc` on Linux/macOS or MinGW on Windows)
- Make (optional) for batch compilation

### Build & Run a Sample Program

```bash
# Navigate to the repository root
cd "s:/Programming/C Programming"

# Compile a program (example: PrimeNumber.c)
gcc "Iteration & Loop Control Structure/PrimeNumber.c" -o prime

# Execute
./prime   # on Windows use: prime.exe
```

You can compile any `.c` file in the tree the same way.  Most programs read input from `stdin` and print results to the console.

---

## Contributing 🤝

Contributions are welcome!  Follow these steps:

1. **Fork** the repository.
2. **Create a new branch** for your change:
   ```bash
   git checkout -b feature/your‑feature
   ```
3. **Add or modify** C files.  Keep the style consistent – add clear comments (the repository already uses beginner‑friendly documentation).
4. **Commit** your changes with a descriptive message.
5. **Push** to your fork and open a **Pull Request**.

Please ensure your code compiles with `gcc -Wall -Wextra -pedantic` and runs without runtime errors.

---

## License 📄

This project is released under the **MIT License** – you are free to use, modify, and distribute the code.

---

## Contact

Maintainer: **Daystar‑1nine** – https://github.com/daystar-1nine

Feel free to open an issue for questions or suggestions.
