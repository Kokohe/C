#include <stdio.h>

// main()
// {
//     int c;
//     c = getchar();

//     while (c != EOF){
//         putchar(c);
//         c = getchar();
//     }
// }

int main(){
    int c;
    int eof;

    while((c = getchar()) != EOF){
        eof = (getchar() != EOF);
        printf("%d",eof);
        putchar(c);
    };
}