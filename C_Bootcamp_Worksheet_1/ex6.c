#include <stdio.h>
int main(){
    int var1 ;
    printf("Input number: ");
    scanf("%d",&var1);
    if (var1 % 2 == 0){
        printf("Number is even \n");
    }
    else {
        printf("Number is odd \n");
    }
    return 0;
}