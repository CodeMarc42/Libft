# Libft
<a href="https://github.com/JaeSeoKim/badge42"><img src="https://badge42.vercel.app/api/v2/cl8afmpq800110gigpyvjzcj3/project/2454232" alt="marza-ga's 42 Libft Score" /></a>

**Libft** is the first 42 School Common Core project. The objective of this project is to develop a library of utility functions written in C that provide commonly used functionalities.
For didactic purposes, my primary focus was on achieving maximum optimization. However, I also took into consideration the importance of maintaining easy understanding, even if it meant sacrificing some optimization in certain functions.

## Features

- **Standard Library Functions**: `memset`, `memcpy`, `strlen`, `strcpy`, and more.
- **Linked List Manipulation**: Functions to create, add, remove, and iterate through linked lists.
- **String Manipulation**: Functions to manipulate strings, such as `strdup`, `strjoin`, and `strtrim`.
- **Character Manipulation**: Functions to check character types, convert cases, and perform other character-related operations.
- **Memory Management**: Functions for dynamic memory allocation and deallocation, such as `malloc`, `free`, and `realloc`.
- **Additional Functions**: Various useful functions, including mathematical operations, file handling, and more.

## Getting Started

To use the `libft` library in your C project, follow these steps:

1. Clone the repository: `git clone https://github.com/codemarc42/libft.git`
2. Include the `libft.h` header file in your source code: `#include "libft.h"`
3. Compile your project with the `libft.a` static library: `gcc -Wall -Wextra -Werror -L./libft -lft -o your_name_program your_source_files.c`

## Usage

Here's a simple example of using a function from `libft` to count the number of characters in a string:

```c
#include "libft.h"
#include <stdio.h>

int main(void) {
    const char *str = "Hello, world!";
    int length = ft_strlen(str);
    printf("Length of the string: %d\n", length);
    return 0;
}
