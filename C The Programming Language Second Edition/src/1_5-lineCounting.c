#include <stdio.h>
#include <stdint.h>

int main(){
    int32_t character, newLine;

    newLine = 0;
    while((character = getchar()) != EOF){
        if (character == '\n')
            ++newLine;
    printf("%d\n", newLine);
    }
}

// EXERCISE 1-8 - Write a program to count blanks, tabs, and new lines

// EXERCISE 1-9 - Write a program to copy it's input to it's output, replaceing each string of one or more blanks with a single blank.

// EXERCISE 1-10 - Write a program ot copy it's input to it's output, replacing each tab by \t, each backspace by \b, and each backslash by \\. This makes tabs and backspaces visible in an unambiguous way.
