#include "Conversion.h"

double Celsius(double fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9;
}

double Fahrenheit(double celsius)
{
    return celsius * 9 / 5 + 32;
}
