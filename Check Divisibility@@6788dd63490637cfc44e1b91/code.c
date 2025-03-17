#include <stdio.h>
int main(){
    int number;
    printf("enter a number:");
    scanf("%d", &number);
    if(year % 5 == 0 && year % 11 == 0){
        printf("%d is divisible by both 5 and 11.\n", number);
    }
    else{
        printf("%d is not dividble by both 5 and 11.\n", numbers);
    }
    return 0;
}