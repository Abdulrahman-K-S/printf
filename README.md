# <p align='center'>The awesome _printf() function</p>

`_printf` - formatted output conversion

`#include "main.h"` `int _printf(const char format , ...);`

<br>

# Overview
1. [Description](#description).
    1. [Formating of the string](#format-of-the-format-string).
    2. [Conversion Specifiers](#conversion-specifiers).
2. [Information on each function](#about-functions).
    1. [_printf.c Modules](#i-_printfc-modules). 
        1. [int _printf(const char *format, ...)](#1-int-_printfconst-char-format).
    2. [_putchar.c Modules](#ii-_putcharc-modules). 
        1. [int _putchar(char c)](#1-int-_putcharchar-c).
    3. [_puts.c Modules](#iii-_putsc-modules). 
        1. [int _puts(char *s)](#1-int-_putschar-s).
    4. [c-s-i-d_printers.c Modules](#iiii-c-s-i-d_printersc-modules). 
        1. [int _print_char(va_list args)](#1-int-_print_charva_list-args).
        2. [int _print_string(va_list args)](#2-int-_print_stringva_list-args).
        3. [int _print_int(va_list args)](#3-int-_print_intva_list-args).
        4. [void _integer_recursion(int integer)](#4-void-_integer_recursionint-integer).
    5. [b-u_printers.c Modules](#x-b-u_printersc-modules). 
        1. [int _print_binary(va_list args)](#1-int-_print_binaryva_list-args).
        2. [void _binary_recursion(int integer)](#2-void-_binary_recursionint-integer).
        3. [int _print_unsigned(va_list args)](#3-int-_print_unsignedva_list-args).
        4. [void _unsigned_recursion(int integer)](#4-void-_unsigned_recursionint-integer).
    6. [o-printers.c Modules](#xi-o_printersc-modules). 
        1. [int _print_octal(va_list args)](#1-int-_print_octalva_list-args).
        2. [void _octal_recursion(int integer)](#2-void-_octal_recursionint-integer).
    7. [x-X_printers.c Modules](#xii-x-x_printersc-modules). 
        1. [int _print_hex(va_list args)](#1-int-_print_hexva_list-args).
        2. [void _hex_recursion(int integer)](#2-void-_hex_recursionint-integer).
        3. [int _print_HEX(va_list args)](#3-int-_print_hexva_list-args).
        4. [void _HEX_recursion(int integer)](#4-void-_hex_recursionint-integer).
    8. [print_format.c Modules](#xiii-print_formatc-modules).
        1. [int _print_format(const char *format, va_list args)](#1-int-_print_formatconst-char-format-va_list-args).
        2. [int isValidSpecifier(char _type)](#2-int-isvalidspecifierchar-_type).
        3. [int _print_specifier(char format, va_list args)](#3-int-_print_specifierchar-format-va_list-args).
3. [Return Value](#return-value).
4. [Authors](#author).


<br>

## Description
The **_printf()** function produce output according to a *format* as described below. Also, write output to *stdout*, the standard output stream.

The  **_printf()** function write the output under the control of a format string that specifies how subsequent arguments or arguments accessed via the variable-length argument facilities of ***stdarg(3)*** are converted for output.

### Format of the format string

The format string is a character string, beginning and ending inits  initial shift state, if any. The format string is composed of zero or more  directives:  ordinary  characters  (not %), which are copied unchanged to the output stream; and conversion specifications, each of which results in fetching zero or more subsequent arguments.
Each conversion specification is introduced by the character % and ends with conversion specifier.

### Conversion specifiers
A character that specifies the type of conversion to be applied. The conversion specifiers and their meaning are:
-  `d, i`: The **_int_** argument should be signed decimal notation, and the resulting number is written.
-  `c`: The **_int_** argument is converted to a char, and the resulting character is written.
-  `s`: The **_const char_** * argument is expected to be a pointer to an array of character type (pointer to a string). Characters from the array are written up  to  (but not including) a terminating null byte ('\0').
- `%`: A '**%**' is written. No argument is converted. The complete conversion specification is '**%%**'.
- `b`: The **_int_** argument is converted to binary and the resulting number is written to stdout.
- `u`: The **_int_** argument should be Short unsigned integer and the resulting number is written to stdout.
- `o`: The **_int_** argument is converted to an octal number and that resulting number is written to stdout.
- `x, X`: The **_int_** argument is converted to a hexadeciaml (lowercase or uppercase) and written to stdout.

<br>

## About Functions

<br>

### I. _printf.c modules

File: [_printf.c](_printf.c).

<hr>

#### 1. int _printf(const char *format, ...)
A function that takes in a format of string and accordingly write it out to the stdout, the standard output stream.

<br>

### II. _putchar.c modules

File: [_putchar.c](_putchar.c).

<hr>

#### 1. int _putchar(char c)
This function gets a char parameter and writes the parameter to the stdout, the standard output stream.

<br>

### III. _puts.c modules

File: [_puts.c](_puts.c).

<hr>

#### 1. int _puts(char *s)
This function gets a char * (aka a string) and writes the parameter to the stdout, the standard output stream.

<br>

### IIII. c-s-i-d_printers.c modules

File: [c-s-i-d_printers.c](c-s-i-d_printers.c).

<hr>

#### 1. int _print_char(va_list args)
This function is called if there's a `c` specifier. It takes in a variadic argument list, traverses that list and write out the char to stdout.

<br>

#### 2. int _print_string(va_list args)
This function is called if there's a `s` specifier. It takes in a variadic argument list, traverses that list and write out the string to stdout.

<br>

#### 3. int _print_int(va_list args)
This function is called if there's a `d` or `i` specifier. It takes in a variadic argument list, traverses that list and calls _integer_recursion to write out the integer to stdout.

<br>

#### 4. void _integer_recursion(int integer)
This function gets an integer and prints the last digit of the number as recursion is applied. Called inside of _print_int().

<br>

### X. b-u_printers.c modules

File: [b-u_printers.c](b-u_printers.c).

<hr>

#### 1. int _print_binary(va_list args)
This function is called if there's a `b` specifier. It takes in a variadic argument list, traverses that list and calls _binary_recursion to write out the binary to stdout.

<br>

#### 2. void _binary_recursion(int integer)
This function gets an integer and prints the last digit of the binary of that number as recursion is applied. Called inside of _print_binary().

<br>

#### 3. int _print_unsigned(va_list args)
This function is called if there's a `u` specifier. It takes in a variadic argument list, traverses that list and calls _unsigned_recursion to write out the unsigned int to stdout.

<br>

#### 4. void _unsigned_recursion(int integer)
This function gets an integer and prints the last digit of the number as recursion is applied. Called inside of _print_unsigned().

<br>

### XI. o_printers.c modules

File: [o-printers.c](o-printers.c).

<hr>

#### 1. int _print_octal(va_list args)
This function is called if there's a `o` specifier. It takes in a variadic argument list, traverses that list and calls _octal_recursion to write out the octal number to stdout.

<br>

#### 2. void _octal_recursion(int integer)
This function gets an integer and prints the last digit of the number as recursion is applied. Called inside of _print_octal().

<br>

### XII. x-X_printers.c modules

File: [x-X_printers.c](x-X_printers.c).

<hr>

#### 1. int _print_hex(va_list args)
This function is called if there's a `x` specifier. It takes in a variadic argument list, traverses that list and calls _hex_recursion to write out the hex number in lowercase to stdout.

<br>

#### 2. void _hex_recursion(int integer)
This function gets an integer and prints the last digit of the number as recursion is applied. Called inside of _print_hex().

<br>

#### 3. int _print_HEX(va_list args) 
This function is called if there's a `X` specifier. It takes in a variadic argument list, traverses that list and calls _hex_recursion to write out the hex number in uppercase to stdout.

<br>

#### 4. void _HEX_recursion(int integer)
This function gets an integer and prints the last digit of the number as recursion is applied. Called inside of _print_HEX().

<br>

### XIII. print_format.c modules

File: [print_format.c](print_format.c).

<hr>

#### 1. int _print_format(const char *format, va_list args);
This function gets a format to be printed and a variadic arguments list, next to check if the
format is valid or invalid and according with the verification the resulting output is written to the standard output stream and returns the format length.

<br>

#### 2. int isValidSpecifier(char _type)
Gets a type and checks if the passed parameter is present in a structure of valid conversion specifiers. Next, returns if the parameter is valid or invalid.

<br>

#### 3. int _print_specifier(char format, va_list args)
This function gets a format valid to be printed and a variadic arguments list to find the format in the
list and selects the appropriate function to execute and writes the format to the standard output stream and returns the length of the valid format.

<br>

## Return Value


Upon successful return, the **_printf()** function return the number of characters printed (excluding the null byte used to end output to strings).

If an output error is encountered, a negative value is returned.

<br>

## Author

`_printf()` is written and maintained by **Fadi** (@fadirafik) and **Abdulrahman Khaled** (@Bebo-K-S).