#include <stdio.h>
int main()
{
    float celsius,farenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f",&celsius);
    farenheit = (9*celsius/5)+32;
    printf("The temperature in farenheit: %f",farenheit);
    return 0;
}