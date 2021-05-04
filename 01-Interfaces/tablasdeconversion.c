#include <stdio.h>
#include "conversion.h"

int main()
{
    const int upper=300; 
    const int step=20;
    double fahr, celsius;

    printf("\n\nFahrenheit => Celsius:\n\n");
    printtabla(Celsius,upper,step);
    
    printf("\n\nCelsius => Fahrenheit:\n\n");
    printtabla(Farenheit,upper,step);

    return 0;
}