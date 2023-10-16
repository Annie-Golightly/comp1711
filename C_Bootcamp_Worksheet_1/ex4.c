#include <stdio.h>

int main(){
    float radius;
    printf("Enter radius \n");
    scanf("%f",&radius);
    float area = 3.14159*radius*radius;
    printf("The area of the circle with radius %f is %f \n", radius, area);
    return 0;
}