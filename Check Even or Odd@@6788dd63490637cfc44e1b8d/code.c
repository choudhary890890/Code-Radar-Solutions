#include <stdio.h>
int main(){
int num;
printf("Enter a integer: ");
scanf("%d", &num);
if(num % 2 == 0){
    printf("Even\n");
}else{
    print("Odd\n");
}
return 0;
}