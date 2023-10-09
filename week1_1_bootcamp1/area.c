#include <stdio.h>
int main(){
    float length;
    float width;
    printf("Enter the length of the rectangle: ");
    scanf("%f",&length);
    printf("\n Enter width of the rectangle: ");
    scanf("%f",&width);
    float area = length*width;
    printf(" %.2f \n",area);
    return 0;

}