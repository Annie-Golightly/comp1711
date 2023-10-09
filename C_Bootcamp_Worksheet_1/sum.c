#include <stdio.h>
int main(){
    int num1;
    int num2;
    printf("Enter first number: \n");
    scanf("%d", &num1);
    printf("Enter second number: \n");
    scanf("%d", &num2);
    int num3 = num1 + num2;
    printf("The sum is: %d \n ", num3);
    return 0;
}