#include <stdio.h>
#include <ctype.h>
int main(){
    char letter;
    scanf("%C", &letter);
    if (isupper(letter)){
        printf("%c, Uppercase\n");
    }
    else if(islower(letter)){
        printf("%c, Lowercase\n");
    }
    else("Not an alphabet\n")
    return 0;
}