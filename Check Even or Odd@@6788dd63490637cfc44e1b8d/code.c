#include <stdio.h>
int main() {
int num;
scanf("%d", &num);
printf("\n");
if(num % 2 == 0){
    printf("Even");
}else{
    printf("Odd");
}
return 0;
}