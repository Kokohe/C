idk it's my C training stuff.

This book uses ANSI C (C89) as it was written in 1988, modern compilers use modern standards.

GCC uses C11 by default, but this can be changed using the -std= flag. "gcc -std=<STANDARD> <FILE>"

Corrections from the book for modern computing:

ints are 32 bit, instead of 16 bit.
longs are 64 bit, instead of 32 bit. (except on windows machines because microsoft, more below.)

specifying type sizes using <stdint.h> is standard practice. Examples: int32_t, int64_t.

This is standard practice because microsoft decided it didn't want to play along with everyone else and set long to 32 bit, while every other opperating system uses long as 64 bit. Standardising int sizes through stdint.h prevents ambiguity in long ints so windows doesn't piss it's pants.