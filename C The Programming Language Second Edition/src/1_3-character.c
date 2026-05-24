#include <stdio.h>

// main(){
//     int c;
//     c = getchar();

//     while (c != EOF){
//         putchar(c);
//         c = getchar();
//     }
// }

int main(){
    int c;

    while((c = getchar()) != EOF){
        putchar(c);
    };
}

// EXERCISE 1-6 - Verify that the expression 'getchar() != EOF' is 0 or 1

// EXERCISE 1-7 - Write a program to print the value of EOF.