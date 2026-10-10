# Trying to learn C

### The reason behind this:

- Low level code is fun
- Understanding how machine code works

I mainly work in Java (Spring Boot). C is a side track to see what Java hides: memory, addresses and pointers. The goal is to understand more what happens with a program , so i can understand what the machine does underneath my code.

## How I learn

- **Paper:** I draw boxes and arrows (stack, variables, addresses) and trace every line in a table when i am stuck. Use a whiteboard for this.
- **Write it myself.** No copy-paste and no AI-written solutions. 

## What I have covered so far

- Syntax that overlaps with Java: `for`, `if / else if / else`, `continue`, arrays, functions
- `printf` and format specifiers (`%d`, `%s`, `%zu`, `%p`)
- Array length with `sizeof(arr) / sizeof(arr[0])`, and the size of an array in bytes
- Strings as `char` arrays that end with `'\0'` (31 bytes for a 30-character string)
- Memory addresses with `&`
- Pointers: `int *p`, `*p` (follow the address), `&x` (address of x)
- Pointer arithmetic: `p++`, `p--`, `p += n`, and why `p + 1` moves one `int` (4 bytes), not one byte
- Pointers move, array elements do not. Changing a value means writing to the box with `*p = ...`

There will be more, but i won't have a full documentation on this project since this is where i will learn about how C works.

## Important notes

- Reading code and writing code are two different skills. Write from a blank file always.

- Learn to manage memory! 