# C Programming Exercises | University of Peloponnese

![Language](https://img.shields.io/badge/Language-C-blue.svg)
![License](https://img.shields.io/badge/License-MIT-yellow.svg)

A comprehensive collection of C programming solutions for the bonus exercises of the **"Programming I"** course at the University of Peloponnese, Department of Informatics & Telecommunications (Academic Year 2024-2025).

## ⚙️ How to Compile and Run

All programs are written in standard C and can be compiled with `gcc`.

1.  **Clone the repository:**
    ```bash
    git clone https://github.com/Je0Dev/C-Exercises.git
    ```

2.  **Navigate to the project directory:**
    ```bash
    cd C-Exercises
    ```

3.  **Compile a specific file:**
    To compile a program, use the `gcc` command. For programs that use the `math.h` library (like the semiprime checker), you need to add the `-lm` flag.
    ```bash
    # Example for a simple file
    gcc -o output_program program_i.c

    # Example for a file using the math library
    gcc -o output_math math_i.c -lm
    ```

4.  **Run the compiled program:**
    ```bash
    ./output_program
    ./output_math
    ```

---

## 📂 Project Structure

The project follows the naming convention required by the course instructions.
