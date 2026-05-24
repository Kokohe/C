#include <stdio.h>
#include <stdint.h>

int main(){
    int32_t c, nl;

    nl = 0;
    while((c = getchar()) != EOF){
        if (c == '\n')
            ++nl;
        printf("%d\n", nl);

    }
}