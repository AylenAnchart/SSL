#include <stdio.h>
#include "conversion.h"

int main () {
    printf("\n\nTest Start:\n\n\n");

    printf("Test Farenheit:\n\n");

    printf("Farenheit - 0 Cels \t");
    assert(Farenheit(0)==32.0);
    printf("OK \n");

    printf("Farenheit - 100 Cels \t");
    assert(Farenheit(100)==212.0);
    printf("OK\n");

    printf("n\nTest Celsius:\n\n");

    printf("Celsius -41 Fahr \t");
    assert(Celsius(41)==5.0);
    printf("OK \n");
    
    printf("Celsius -212 Fahr \t");
    assert(Celsius(212)==100.0);
    printf("OK\n");

    printf("\n\nTest Finish OK\n\n");

    return 0;
}