#include <stdio.h>

int function(){
    int c;
    int eof;

    while((c = getchar()) != EOF){
        eof = (getchar() != EOF);
        printf("%d",eof);
        putchar(c);
    };
}