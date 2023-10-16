#include <stdio.h>
int main(){
    int num;
    int factorial = 0;
    int x;
    printf("Enter number: ");
    scanf("%d",&num);
    for (x=0;x<(num+1);x++){
        factorial += x;
    }
    printf("%d",factorial);
    return 0;
}