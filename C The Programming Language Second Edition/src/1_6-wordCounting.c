#include <stdio.h>
#include <stdint.h>

const int8_t IN = 1;
const int8_t OUT = 0;

int32_t character, newLine, newWord, newCharacter, state;

int main(){
    
    state = OUT;
    newLine = newWord = newCharacter = 0;

    while((character = getchar()) != EOF){
        ++newCharacter;
        if (character == '\n')
            ++newLine;
        if (character == ' ' || character == '\n' || character == '\t')
            state = OUT;
        else if (state == OUT){
            state = IN;
            ++newWord;
        }
    }
    printf("%d %d %d\n", newLine, newWord, newCharacter);
}
