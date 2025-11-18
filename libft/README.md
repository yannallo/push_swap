# Libft
![Status](https://img.shields.io/badge/Status-Finished-success)
![Language](https://img.shields.io/badge/Language-C-blue)
![Norminette](https://img.shields.io/badge/Norminette-%E2%9C%93%0A-success)

## A library of standard C functions
This project is the first step of the 42 curriculum.
It aims to implement your own standard C library and improve your knowledge of basic C (data types, memory).
This library will be reused during the 42 cursus.

## Functions
| Category | Examples |
|----------|----------|
| Memory |`memset`, `memcpy`, `bzero`, `calloc`|
| Strings |`strlen`, `strdup`, `strjoin`, `substr`|
| Char | `isalpha`, `isdigit`, `toupper`|
| Convert |`atoi`, `itoa`|
| Linked list |`lstnew`, `lstadd_back`, `lstsize`|

## Installation

```bash
# Clone repo
git clone https://github.com/yannallo/libft.git

# Build library
make -C libft
```

## Usage
At this point you should have a libft.a (Archive containing all the object file).
You will need to include "libft.h" and link the library when compiling.

```Bash
gcc -Ilibft main.c -Llibft -lft -o test
```

### main.c
```C
#include "libft.h"
#include <stdio.h>

int main(void)
{
  char  *s = ft_strdup("A simple string !!");

  printf("%s\n", s);
  free(s);
  return 0;
}
```
