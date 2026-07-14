# 42 – ft_printf

## Description

**ft_printf** is a 42 project that recreates the standard C `printf` function. It supports the mandatory conversion specifiers while providing a deeper understanding of variadic functions, formatted output, and low-level character handling.

## How it works

The program:

- Parses a format string character by character
- Supports the mandatory conversion specifiers (%c, %s, %p, %d, %i, %u, %x, %X, and %%)
- Processes a variable number of arguments using the `stdarg.h` library
- Prints the formatted output while returning the number of characters written

## Concepts

- Variadic functions
- Format string parsing
- Integer conversion
- Character and string manipulation
- Static libraries
