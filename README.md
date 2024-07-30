# ScientificCalculator
The project is a console-based scientific calculator implemented in C++. This calculator can perform a variety of scientific operations, such as basic arithmetic (addition, subtraction, multiplication, and division), trigonometric functions.
# Scientific Calculator in C++

## Overview
This project is a console-based scientific calculator implemented in C++. The calculator supports a wide range of mathematical operations, from basic arithmetic to advanced scientific computations. It is designed to provide accurate and efficient results, making it a useful tool for students, engineers, and anyone who needs to perform mathematical calculations.

## Features
- Basic arithmetic operations: addition, subtraction, multiplication, and division.
- Trigonometric functions: sine, cosine, tangent, and their inverses.
- Logarithmic and exponential functions.
- Power and root calculations.
- Factorials and combinations.
- User-friendly interface for inputting expressions.
- Error handling for invalid inputs.

## Getting Started

### Prerequisites
- C++ compiler (e.g., g++, clang++)
- CMake (optional, for building the project)

### Installation
1. Clone the repository:
    ```sh
    git clone https://github.com/yourusername/scientific-calculator.git
    ```
2. Navigate to the project directory:
    ```sh
    cd scientific-calculator
    ```
3. Compile the code:
    ```sh
    g++ -o calculator main.cpp calculator.cpp -lm
    ```
    Or, if you are using CMake:
    ```sh
    mkdir build
    cd build
    cmake ..
    make
    ```

### Usage
Run the compiled executable:
```sh
./calculator
