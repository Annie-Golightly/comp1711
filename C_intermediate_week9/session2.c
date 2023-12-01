#include <stdlib.h>
#include <stdio.h>

int main(){
    printf("An int is size: %ld\n",sizeof(int));
    printf("An double is size: %ld\n",sizeof(double));
    printf("An char is size: %ld\n",sizeof(char));
    char* name = "Jonathon";
    printf("The word %s is size %ld\n",name,sizeof(name)); //ignoring what's in name, size needed for pointer
}