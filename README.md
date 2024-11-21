# Ft_Printf

Ft_Printf is a custom implementation of the standard C `printf` function, providing flexible formatting and output capabilities for various data types.

## Table of Contents
- [Ft\_Printf](#ft_printf)
  - [Table of Contents](#table-of-contents)
  - [Features](#features)
  - [Requirements](#requirements)
  - [Directory Structure](#directory-structure)
  - [Compiling and Usage](#compiling-and-usage)
    - [Compilation Example](#compilation-example)
  - [Supported Formats](#supported-formats)
  - [Functions](#functions)
  - [Clean and Rebuild](#clean-and-rebuild)
  - [License](#license)

## Features

This library provides a custom `printf` implementation with support for:
- Printing formatted output to standard output
- Handling multiple format specifiers
- Supporting various data types:
  - Integers
  - Unsigned integers
  - Hexadecimal values
  - Pointers
  - Characters
  - Strings

## Requirements

To compile this project, you will need:
- A C compiler (`cc`)
- Make utility

## Directory Structure

```
.
├── Makefile            # Makefile for compiling and building the project
├── include/            # Header files
│   └── libftprintf.h   # Main header file
├── lib/                # Library output directory
├── objs/               # Object files directory
└── srcs/               # Source files
```

## Compiling and Usage

To compile the library, run:

```bash
make
```

This will create a static library `libftprintf.a` in the `lib` directory.

### Compilation Example

To use in your project:

```bash
cc -Wall -Werror -Wextra -I include srcs/your_c_file.c lib/libftprintf.a
```
Here's a breakdown of the compilation command:

- `cc`: C compiler
- `-Wall -Werror -Wextra`: Compiler warning flags
  - `-Wall`: Enable all standard warnings
  - `-Werror`: Treat warnings as errors
  - `-Wextra`: Enable additional warnings
- `-I include`: Specify include directory for header files
  - Tells compiler where to find `libftprintf.h`
- `srcs/your_c_file.c`: Source file to compile
- `lib/libftprintf.a`: Static library to link against

The `-I include` is crucial because it tells the compiler where to look for header files.

## Supported Formats

The library supports the following format specifiers:
- `%c`: Character
- `%s`: String
- `%p`: Pointer address
- `%d`: Decimal integer
- `%i`: Integer
- `%u`: Unsigned integer
- `%x`: Lowercase hexadecimal
- `%X`: Uppercase hexadecimal
- `%%`: Percent sign

## Functions

- `ft_printf()`: Main formatting and printing function
- Supporting utility functions for different print types

## Clean and Rebuild

To clean object files:
```bash
make clean
```

To remove library and object files:
```bash
make fclean
```

To rebuild the project:
```bash
make re
```

## License

This project is open-source and available under the MIT License.