#include <stdio.h>
int main(){
    char unit;
    float temp;
    printf("Enter f to convert from farenheit and c to convert from celsius: ");
    scanf("%s",&unit);
    printf("Enter temperature: ");
    scanf("%f",&temp);
    if (unit == 'f'){
        float celsius = (temp-32)/1.8;
        printf("Temperature in celsius is %f \n",celsius);
    }
    else if (unit == 'c'){
        float farenheit = (1.8*temp) + 32;
        printf("Temperature in farenheit is %f \n",farenheit);
    }
    else{
        printf("Make sure you enter only c or f \n");
    }
    return 0;

}