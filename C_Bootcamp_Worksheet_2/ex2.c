#include <stdio.h>

int main(){
    int nums[5] = {1,2,3,4,5};
    int reverseNums[5];
    int x;
    int count = 0;

    for (x=4;x>-1;x--){
        reverseNums[count] = nums[x];
        count += 1;
    }
    for(x=0;x<5;x++){
        printf("%d\n",reverseNums[x]);
    }
    return 0;
}