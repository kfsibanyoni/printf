# ALX Software Engineering Programme: printf Group Project

## Dsecription

This is the first team project for the the cohort 14 group of ALX.
A program for converting fromatted output in C. The program emulates the C standard library function, 'printf'.



What one should lean from the prject:

* How to use git in a team setting.
* Applying function that we have learned up to this far
* The complexities of printf function
* Finding a good workflow and spliting thw work into equal but manageable parts

---

## Authorized functions and macros

* write (man 2 write);
* malloc (man 3 malloc);
* free (man 3 free);
* va_start (man 3 va_start);
* va_end (man 3 va_end);
* va_copy (man 3 va_copy);
* va_arg (man 3 va_arg);

---

## Compilation

* Code needs to be compiled this way: 

**$ gcc -Wall -Werror -Wextra -pedantic *.c**

---

## Project Requirements 

-   Allowed editors:  `vi`,  `vim`,  `emacs`
-   All your files will be compiled on Ubuntu 14.04 LTS
-   Your programs and functions will be compiled with  `gcc 4.8.4`  using the flags  `-Wall`  `-Werror`  `-Wextra`  `and -pedantic`
-   All your files should end with a new line
-   A  `README.md`  file, at the root of the folder of the project is mandatory
-   Your code should use the  `Betty`  style. It will be checked using  [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl "betty-style.pl")  and  [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl "betty-doc.pl")
-   You are not allowed to use global variables
-   No more than 5 functions per file
-   In the following examples, the  `main.c`  files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own  `main.c`  files at compilation. Our  `main.c`  files might be different from the one shown in the examples
-   The prototypes of all your functions should be included in your header file called  `holberton.h`
-   Don’t forget to push your header file
-   All your header files should be include guarded

## Project Tasks

### 0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life

Write a function that produces output according to a format.

- Prototype: **int _printf(const char *format, ...);**
- Returns: the number of characters printed (excluding the null byte used to end output to strings)
- write output to stdout, the standard output stream
- format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
* c
* s
* %

### 1. Education is when you read the fine print. Experience is what you get if you don't

- Handle the following conversion specifiers:

* d
* i

### 2. With a face like mine, I do better in print

Handle the following custom conversion specifiers:

* b: the unsigned int argument is converted to binary

### 3. What one has not experienced, one will never understand in print

Handle the following conversion specifiers:

* u
* o
* x
* X

---

### Authors
* **Katlego Sibanyoni** 
* **Khensani Ngobeni**
