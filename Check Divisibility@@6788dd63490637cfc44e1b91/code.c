#include <stdio.h>
int main(){
    int number;
    printf("enter a number:");
    scanf("%d", &number);
    if(number % 5 == 0 && number % 11 == 0){
        printf("%d is dividble by both 5 and 11.\n", number);
    }
    else{
        printf("%d is not divisible by both 5 and 11.\n", number);
    }
    return 0;
}