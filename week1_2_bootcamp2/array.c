#include <stdio.h>
int main(){
    int myarray[4] = {1,2,3,4};
    int size = sizeof(myarray);
    int x;
    for (x=0; x<4; x++){
        printf("%d \n", myarray[x]);
    }
    return 0;
}