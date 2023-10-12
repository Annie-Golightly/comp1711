#include <stdio.h>
int main(){
    int x;
    for (x=1; x<11; x++)
    {
        printf("%d \n", x);
    }
    int y;
    for (y=0; y<51; y+=2)
    {
        printf("%d \n", y);
    }

    int z;
    for (z=11; z<1001; z+=11)
    {
        printf("%d \n", z);
    }

    int q;
    for (q=100; q>-1; q-=5)
    {
        printf("%d \n", q);
    }
    return 0;

}