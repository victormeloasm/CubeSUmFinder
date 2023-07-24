# Cubes of Digits - Finding Natural Numbers

This C program finds all natural numbers less than 10000 that are equal to the sum of the cubes of their digits. The program is implemented in C and demonstrates a simple algorithm to iterate through numbers and check if they meet the specified condition.

## Table of Contents

- [Introduction](#introduction)
- [Requirements](#requirements)
- [How to Use](#how-to-use)
- [Algorithm](#algorithm)
- [Examples](#examples)
- [Contributing](#contributing)
- [License](#license)

## Introduction

Natural numbers are those positive integers greater than zero. This program aims to find all such natural numbers less than 10000 that satisfy a unique property: they are equal to the sum of the cubes of their digits.

For example, the number 153 is one such number:
```
1^3 + 5^3 + 3^3 = 153
```

## Requirements

To compile and run the C program, you will need:

- A C compiler (e.g., GCC)

## How to Use

1. Clone the repository to your local machine or download the [cubes_of_digits_up_to_10000.c](cubes_of_digits_up_to_10000.c) file.

2. Open a terminal or command prompt and navigate to the directory containing the `cubes_of_digits_up_to_10000.c` file.

3. Compile the C program using your preferred C compiler (e.g., GCC) with the following command:

   ```bash
   gcc -o cubes_of_digits_up_to_10000 cubes_of_digits_up_to_10000.c
   ```

4. Run the compiled executable:

   ```bash
   ./cubes_of_digits_up_to_10000
   ```

5. The program will output all the natural numbers less than 10000 that are equal to the sum of the cubes of their digits.

## Algorithm

The program uses a simple algorithm to find the numbers that meet the given condition. It iterates through all numbers from 1 to 9999 (natural numbers less than 10000) and for each number, it calculates the sum of the cubes of its digits. If this sum equals the number itself, the number is considered a solution and is printed to the console.

The `sum_of_cubes_of_digits` function is used to calculate the sum of cubes of individual digits for each number.

## Examples

Here are some examples of natural numbers less than 10000 that are equal to the sum of the cubes of their digits:

```
153 = 1^3 + 5^3 + 3^3
370 = 3^3 + 7^3 + 0^3
371 = 3^3 + 7^3 + 1^3
407 = 4^3 + 0^3 + 7^3
```

## Contributing

Contributions to the project are always welcome. If you find any issues or have suggestions for improvements, please feel free to open an issue or create a pull request.

## License

This C program is licensed under the [MIT License](LICENSE). You are free to use, modify, and distribute the code for personal and commercial purposes.
