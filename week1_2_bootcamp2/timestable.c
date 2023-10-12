# include <stdio.h>

int main (){
    int a;
    int b;
    for (a=1; a<13; a++){
        for (b=1; b<13; b++){
            int c = a*b;
            printf("%d \n", c);
        }
    }
    return 0;
}