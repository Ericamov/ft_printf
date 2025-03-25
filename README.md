# ft_printf – A Custom Implementation of printf()

ft_printf is a custom C implementation of the standard `printf()` function. This project explores variadic functions and formatted output, making it a great way to deepen your understanding of C programming.

## 🔧 Features

**Handles multiple format specifiers:**

- `%c` → Prints a single character
- `%s` → Prints a string
- `%p` → Prints a pointer in hexadecimal
- `%d` / `%i` → Prints integers (base 10)
- `%u` → Prints unsigned integers
- `%x` / `%X` → Prints hexadecimal numbers (lowercase/uppercase)
- `%%` → Prints a percent sign

**Variadic Function Handling:**

Uses `stdarg.h` functions (`va_start`, `va_arg`, `va_end`) to process a variable number of arguments.

## ⚡ How It Works

ft_printf mimics the behavior of the original `printf()` without implementing its buffer management. It processes format strings, extracts arguments, and prints formatted output accordingly.

## 🎯 Why It's Useful

Understanding how printf() works internally strengthens the knowledge of function pointers, memory handling, and formatted output.

## 📜 License

This project is part of the 42 school curriculum.
