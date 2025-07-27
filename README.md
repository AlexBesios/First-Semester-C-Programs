# First Semester C Programs 🎯

A collection of C programming projects developed during the first semester of computer science studies. This repository showcases fundamental programming concepts and various console-based applications.

## 📋 Table of Contents
- [Programs Overview](#programs-overview)
- [Getting Started](#getting-started)
- [Compilation Instructions](#compilation-instructions)
- [Program Descriptions](#program-descriptions)
- [Technologies Used](#technologies-used)
- [Contributing](#contributing)

## 🎮 Programs Overview

This repository contains 11 different C programs covering various programming concepts:

### Games & Interactive Programs
- **Snake Game** - A classic console-based Snake game with score tracking
- **Tic Tac Toe** - Two-player Tic Tac Toe game
- **Hangman** - Word guessing game with limited attempts
- **Dice Game** - Probability-based dice rolling game
- **Guess Number Game** - Number guessing game with hints

### Utility Programs
- **Calculator** - Basic arithmetic calculator with four operations (+, -, *, /)
- **ASCII Converter** - Character to ASCII value converter
- **Temperature Converter** - Temperature conversion between different units
- **Pascal's Triangle** - Generates Pascal's triangle patterns
- **Power Functions** - Mathematical power calculations
- **Size of Datatypes** - Displays memory sizes of different C data types

### Laboratory Exercises
- **Εργαστηριο 9** - Laboratory exercise 9 with multiple code implementations

## 🚀 Getting Started

### Prerequisites
- GCC compiler or any C compiler
- Windows environment (some programs use Windows-specific libraries)
- Basic understanding of C programming

### Installation
1. Clone the repository:
   ```bash
   git clone https://github.com/AlexBesios/First-Semester-C-Programs.git
   ```
2. Navigate to the project directory:
   ```bash
   cd First-Semester-C-Programs
   ```

## 🔨 Compilation Instructions

Each program can be compiled using GCC. Navigate to the specific program directory and use:

```bash
gcc code.c -o program_name.exe
```

For programs with specific names:
```bash
gcc hangman.c -o hangman.exe
gcc ASCII.c -o ASCII.exe
gcc Dice.c -o Dice.exe
```

### Running Programs
After compilation, run the executable:
```bash
./program_name.exe
```

## 📖 Program Descriptions

### 🎮 Games

#### Snake Game
- **File**: `Snake game/code.c`
- **Features**: 
  - Arrow key controls (UP, DOWN, LEFT, RIGHT)
  - Score tracking and record keeping
  - Food generation and collision detection
  - Game over conditions
- **Libraries**: `stdio.h`, `conio.h`, `windows.h`, `time.h`

#### Tic Tac Toe
- **File**: `Tic Tac Toe/code.c`
- **Features**: Two-player game with win condition checking

#### Hangman
- **File**: `Hangman/hangman.c`
- **Features**: 
  - Word guessing with limited attempts (6 tries)
  - Case-insensitive input handling
  - Progress display with underscores
- **Concepts**: String manipulation, loops, conditional statements

#### Dice Game
- **File**: `Dice game/Dice.c`
- **Features**: Random dice rolling simulation

#### Guess Number Game
- **File**: `Guess number game/code.c`
- **Features**: Number guessing with feedback hints

### 🛠️ Utilities

#### Calculator
- **File**: `Calculator/code.c`
- **Features**: 
  - Basic arithmetic operations (+, -, *, /)
  - Double precision floating-point support
  - Input validation with switch-case structure
- **Concepts**: Switch statements, user input handling

#### ASCII Converter
- **File**: `ASCII converter/ASCII.c`
- **Features**: 
  - Character to ASCII value conversion
  - Continuous operation with user choice
  - Input validation and case handling
- **Concepts**: ASCII values, loops, boolean logic

#### Temperature Converter
- **File**: `Temperature Converter/code.c`
- **Features**: Temperature unit conversions

#### Pascal's Triangle
- **File**: `Pascal's triangle/code.c`
- **Features**: Mathematical pattern generation

#### Power Functions
- **File**: `Power functions/code.c`
- **Features**: Mathematical power calculations

#### Size of Datatypes
- **File**: `Size of datatypes/code.c`
- **Features**: 
  - Display memory sizes of C data types
  - Educational tool for understanding memory allocation
- **Concepts**: `sizeof` operator, data types

## 💻 Technologies Used

- **Language**: C
- **Compiler**: GCC
- **Platform**: Windows
- **Libraries Used**:
  - `stdio.h` - Standard input/output
  - `stdlib.h` - Standard library functions
  - `string.h` - String manipulation
  - `conio.h` - Console input/output (Windows)
  - `windows.h` - Windows API
  - `time.h` - Time functions
  - `ctype.h` - Character type functions

## 🎓 Learning Objectives

These programs demonstrate:
- **Basic I/O Operations**: Reading user input and displaying output
- **Control Structures**: If-else statements, loops, switch-case
- **Functions**: Function definition and calling
- **Arrays and Strings**: String manipulation and array handling
- **Pointers**: Basic pointer usage
- **Structures**: Custom data types
- **File Handling**: Reading from and writing to files
- **Memory Management**: Understanding data type sizes
- **Game Logic**: Implementing game rules and win conditions

## 📁 Repository Structure

```
First-Semester-C-Programs/
├── ASCII converter/
│   ├── ASCII.c
│   └── ASCII.exe
├── Calculator/
│   ├── code.c
│   └── code.exe
├── Dice game/
│   ├── Dice.c
│   └── Dice.exe
├── Snake game/
│   ├── code.c
│   ├── code.exe
│   └── record.txt
├── Hangman/
│   ├── hangman.c
│   └── hangman.exe
├── [Other programs...]
└── README.md
```

## 🤝 Contributing

Contributions are welcome! Feel free to:
- Report bugs
- Suggest improvements
- Add new features
- Improve documentation

## 📝 Notes

- Some programs use Windows-specific libraries (`conio.h`, `windows.h`)
- Executable files (`.exe`) are included for immediate testing
- The `record.txt` file in Snake game stores high scores
- Programs demonstrate progressively complex concepts suitable for first-semester learning

## 📧 Contact

For questions or suggestions, please open an issue in this repository.

---

*This repository serves as a learning portfolio showcasing fundamental C programming concepts and console application development.*
