# Beginner

A collection of small C programs created while learning programming fundamentals. Each exercise focuses on a specific concept, from loops and conditionals to arrays and matrices.

## Programs

| File | Description | Concepts |
| --- | --- | --- |
| `git.c` | Calculates the factorial of a non-negative integer | Loops, input validation |
| `git_2.c` | Finds the greatest of three numbers | Conditionals |
| `matrix_multiplication.c` | Multiplies two 3 × 3 matrices | Arrays, nested loops |
| `trace_ofsum_matrix.c` | Adds two 3 × 3 matrices and finds the trace of the sum | Arrays, nested loops |
| `No._guessing_game.c` | Number guessing game with higher/lower hints | Random numbers, loops, input/output |

## Requirements

- GCC or another C compiler
- A terminal or command prompt

## Compile and run

Compile a program from the repository folder. For example, to build the factorial exercise:

```sh
gcc git.c -o factorial
```

Run it on Windows:

```powershell
.\factorial.exe
```

Run it on Linux or macOS:

```sh
./factorial
```

### Number guessing game

Build the game:

```sh
gcc No._guessing_game.c -o number_guessing_game
```

Run it on Windows:

```powershell
.\number_guessing_game.exe
```

Run it on Linux or macOS:

```sh
./number_guessing_game
```

The game selects a number from 1 to 100. Enter guesses to receive higher or lower hints until you find the number.

Replace the source filename and output name in the commands to build a different exercise.

## About

This repository is a learning log. Programs may change as new concepts are practised, and suggestions are welcome.
