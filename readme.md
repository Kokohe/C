# The book of C
## Introduction
source code files and exercises are located in "C The Programming Language Second Edition/src".\
Compiled binaries of each source file located in "C The Programming Language Second Edition/bin".\
Test files for my own understanding located in "C The Programming Language Second Edition/testing".

This book uses ANSI C (C89) as it was written in 1988, modern compilers use modern standards.

2 versions of the ANSI C K&R book are supplied, a pdf version and a text version.
## Differences between the book and modern compilers
GCC uses C11 by default, but this can be changed using the -std= flag. "gcc -std=<STANDARD> <FILE>".\
I recommend not changing the compiler, and researching the differences between C89 and C11 during training.\
Here is a list of differences I've found so far.

\- Ints are 32 bit, instead of 16 bit in 64 bit computers.

\- Longs are 64 bit, instead of 32 bit  in 64 bit computers.\ (except for microsoft, more below.)
└──*To avoid microsoft complaining, specifying type sizes using <stdint.h> is standard practice. Examples: int32_t, int64_t. This is standard practice because microsoft decided it didn't want to play along with everyone else and set long to 32 bit, while every other opperating system uses long as 64 bit. Standardising int sizes through <stdint.h> prevents ambiguity in long ints so windows doesn't piss it's pants.*

\- The book uses #define, use const instead.  #define is a preprocessor macro that goes through your code and replaces every instance with the assigned variable (thingy = 0 for example). Const is an actual type variable, not a drop in replacement. Modern computing uses const, not #define. const is handled by the compiler, #define is handled by the preprocessor.

\- 