# push_swap
![Status](https://img.shields.io/badge/Status-Finished-success)
![Language](https://img.shields.io/badge/Language-C-blue)
![Norminette](https://img.shields.io/badge/Norminette-%E2%9C%93%0A-success)

## A sorting algorithm

`push_swap` is a program that sorts a list of integers using 2 stacks (`a` and `b`) and a limited set of instructions.
The goal is to sort the list with the minimum number of operations.
I chose the Radix sort algorithm, which is elegant and efficient, especially when applied in binary using the two stacks.

## Radix sort

Binary radix sort works as follows:
1. Compare the bits of each number.
2. Push numbers with a 1 int the current bit position to stack `b`.
3. Reintegratre numbers back into stack `a` after each iteration.

## Installation

```bash
# Clone repo
git clone https://github.com/yannallo/push_swap.git

# Enter directory
cd push_swap

# Build
make
```

## Usage

```bash
./push_swap <NUMBERS>
```

Example:
```bash
./push_swap "4 67 3 87 23"
ra
ra
pb
ra
ra
pb
rra
pa
pa
```
This is a sequence of operation done between the two stacks.
