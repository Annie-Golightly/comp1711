#include <stdio.h>

int main(){
    int num[5] = {1,1,1,1,1};
    int sum = 0;
    int x;
    for (x=0;x<5;x++){
        sum += num[x];
    }
    printf("%d \n",sum);
    return 0;
}