#include <stdio.h>
int main(){
    int numbers[5] = {1,2,3,4,5};
    int highest = 0;
    int i;
    for (i=0; i<5; i++){
        if (numbers[i] > highest){
            highest = numbers[i];
        }
        else{
        }
    }
    printf("%d\n",highest);
    return 0;

    
    
}