#include <stdio.h>
int main(){
    int number;
    scanf("%d", &number);
    if(number % 5 == 0 && number % 11 == 0){
        printf("%d", number);
    }
    else{
        printf("%d", number);
    }
    return 0;
}