#include <stdio.h>

int main (){
    int character, i, nWhite, nOther;
    int nDigit[10];

    nWhite = nOther = 0;

    for (i = 0; i < 10; ++i)
        nDigit[i] = 0;
    while ((character = getchar()) != EOF){
        if (character >= '0' && character <= '9')
            ++nDigit[character-'0'];
        else if (character == ' ' || character == '\n' || character == '\t')
            ++nWhite;
        else
            ++nOther;
    printf("Digits =");
    for (i = 0; i < 10; ++i)
        printf(" %d", nDigit[i]);
    printf(", White space = %d, other = %d\n", nWhite, nOther);
    }
    
}