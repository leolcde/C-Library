# 🛠️ LibC - Reimplementation of the C standard library

Welcome to **LibC**, an educational project that reimplements the most common functions of the C language standard library. This project helps students strengthen their low-level understanding of the language, memory management, strings, and much more.

## 📚 Project objectives

- Reproduce the behavior of standard libc functions (string.h, stdlib.h, ctype.h, etc.).
- Understand the inner workings of simple system calls.
- Adhere to strict coding standards (Epitech standard / POSIX standard if applicable).
- Create a reusable base for other C projects.

---

## 🧩 Reimplemented functions

| Catégorie            | Fonctions implémentées |
|----------------------|------------------------|
| 🔤 String Handling   | `my_strlen`, `my_strcpy`, `my_strcmp`, `my_strdup`, `my_strcat`, `my_strncpy`, `my_strchr`, `my_strstr`, `my_revstr`, ... |
| 🔢 Conversions       | `my_atoi`, ... |
| 🔣 Caractères        | `my_isalpha`, `my_isdigit`, `my_isalnum`, ... |
| 🧹 Utils             | `my_putstr`, `my_putchar`, `my_putnbr`, ... |

> The `my_` prefix is ​​used to avoid conflicts with real libc functions

---

## 🚀 Compilation

Use the provided `Makefile` to compile the library:

```bash
make
