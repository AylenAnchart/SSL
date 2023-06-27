#include <stdio.h>
#include <assert.h>
#include "Conversion.h"

void testConversion()
{
    double celsius = Celsius(32);
    assert(celsius == 0);

    double fahrenheit = Fahrenheit(100);
    assert(fahrenheit == 212);

    // Agrega más pruebas aquí
}

int main()
{
    testConversion();
    printf("Todas las pruebas pasaron correctamente.\n");
    return 0;
}
