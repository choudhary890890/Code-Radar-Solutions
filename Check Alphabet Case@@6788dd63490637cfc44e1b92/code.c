#include <stdio.h>
int main(){
    char letter;
    scanf("%C", &letter);
    if(isuper(letter)){
        printf("%c, Uppercase\n");
    }
    else if(islower(letter)){
        prinf("%c, Lowercase\n");
    }
    else("Not an alphabet\n")
}