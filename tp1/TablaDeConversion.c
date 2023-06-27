#include <stdio.h>
#include "Conversion.h"

void PrintFilas(double (*conversionFunc)(double), double lower, double upper, double increment)
{
    for (double value = lower; value <= upper; value += increment)
    {
        printf("%8.2f %10.2f\n", value, conversionFunc(value));
    }
}

void PrintTablaCelsius(double lower, double upper, double increment)
{
    printf("Fahrenheit   Celsius\n");
    printf("--------------------\n");
    PrintFilas(Celsius, lower, upper, increment);
}

void PrintTablaFahrenheit(double lower, double upper, double increment)
{
    printf("Celsius   Fahrenheit\n");
    printf("--------------------\n");
    PrintFilas(Fahrenheit, lower, upper, increment);
}

int main()
{
    double lower = 0;
    double upper = 100;
    double increment = 10;

    printf("Tabla de Celsius a Fahrenheit:\n");
    PrintTablaFahrenheit(lower, upper, increment);

    printf("\nTabla de Fahrenheit a Celsius:\n");
    PrintTablaCelsius(lower, upper, increment);

    return 0;
}
