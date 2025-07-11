# String Manipulation Library

## Overview
A C library implementing common string operations with two versions:
1. Array-based implementation (`mystring_ars.c`)
2. Pointer-based implementation (`mystring_ptrs.c`)

## Features

### Core Functions
| Function | Description | Equivalent Standard Function |
|----------|-------------|-------------------------------|
| `ms_lenght` | Calculates string length | `strlen` |
| `ms_copy` | Copies entire string | `strcpy` |
| `ms_ncopy` | Copies first n characters | `strncpy` |
| `ms_concat` | Concatenates strings | `strcat` |
| `ms_nconcat` | Concatenates first n characters | `strncat` |
| `ms_compare` | Compares two strings | `strcmp` |
| `ms_ncompare` | Compares first n characters | `strncmp` |
| `ms_search` | Finds substring in string | `strstr` |

## Build and Run

```bash
make
 
# Run program
./string_program
```
