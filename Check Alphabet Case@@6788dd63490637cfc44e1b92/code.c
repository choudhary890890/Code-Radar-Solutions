#include <stdio.h>
#include <ctype.h>
int main(){
    char letter;
    scanf("%C", &letter);
    if (isupper(letter)){
        printf("Uppercase\n");
    }
    else if(islower(letter)){
        printf("Lowercase\n");
    }
    else{
        printf("Not an alphabet\n")

    }

    return 0;
}