#include <stdio.h>
int main()
{
    float  fahrenheit,celsius;

    printf("Enter the temperature in fahrenheit ");
    scanf("%f",&fahrenheit);

    celsius = (5.0 / 9.0) * (fahrenheit - 32);

    printf("The temperature in degrees Celsius is: %.2f\n", celsius);

    return(0);
}
