#include <stdio.h>

int main()
{
    int vector[5] = {11,13,17, 23 , 31};

    int* address = vector;

    printf ( "\nAddress[0] = %d\n\n", *address);

    printf ( "\nAddress[1] = %d\n\n", *address++); //the ++ is added after the print

    printf ("\n Address[2] = %d\n\n", *++address); //this then prints the third value, as the address is incremented again but before the print

    printf ("\n \n What is happening here?");

}