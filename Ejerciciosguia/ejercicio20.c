#include <stdio.h>

// Función que calcula la longitud de una cadena
int longitud_cadena(char cadena[]) {
    int longitud = 0; // Inicializamos la longitud en cero
    while (cadena[longitud] != '\0') { // Mientras no se haya llegado al final de la cadena
        longitud++; // Incrementamos la longitud
    }
    return longitud; // Retornamos la longitud calculada
}

// Función que determina si una cadena es vacía
int es_cadena_vacia(char cadena[]) {
    if (cadena[0] == '\0') { // Si el primer elemento de la cadena es '\0', entonces está vacía
        return 1;
    } else {
        return 0;
    }
}

// Función que concatena dos cadenas
void concatenar_cadenas(char cadena1[], char cadena2[], char resultado[]) {
    int i = 0, j = 0;

        // Copiamos los caracteres de la primera cadena en el resultado
    while (cadena1[i] != '\0') {
        resultado[i] = cadena1[i];
        i++;
    }

    // Copiamos los caracteres de la segunda cadena en el resultado
    while (cadena2[j] != '\0') {
        resultado[i] = cadena2[j];
        i++;
        j++;
    }

    resultado[i] = '\0'; // Agregamos el caracter nulo al final de la cadena resultante
}

int main() {
    char cadena1[100], cadena2[100], resultado[200]; //determino cantidad maxima de caracteres, obteniendose como resultado 200 caracteres

    // Pedimos al usuario que ingrese las cadenas
    printf("Ingrese la primera cadena: ");
    scanf("%s", cadena1); //La función scanf() es utilizada para leer una entrada desde la entrada estándar (normalmente la consola) y almacenarla en una variable. En este caso, la cadena de caracteres ingresada por el usuario se almacena en la variable cadena1. El formato de la cadena de control en la función scanf() indica cómo se debe leer la entrada. En este caso, %s indica que se debe leer una cadena de caracteres, es decir, una secuencia de caracteres seguidos sin espacios en blanco.
    printf("Ingrese la segunda cadena: ");
    scanf("%s", cadena2);

    // Calculamos la longitud de la primera cadena
    int longitud = longitud_cadena(cadena1);
    printf("La longitud de la cadena 1 es: %d\n", longitud);

    // Determinamos si la segunda cadena es vacía
    if (es_cadena_vacia(cadena2)) {
        printf("La cadena 2 esta vacia.\n");
    } else {
        printf("La cadena 2 no esta vacia.\n");
    }

    // Concatenamos las dos cadenas
    concatenar_cadenas(cadena1, cadena2, resultado);
    printf("La cadena resultante de la concatenacion es: %s\n", resultado);

    return 0;

    system("pause");
}



