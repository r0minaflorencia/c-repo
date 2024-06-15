#include <stdio.h>
#include <math.h>

/* 8. Escriba un programa que eleve un número a una potencia, utilizando dos métodos:
a) utilizando la función potencia y
b) usando un bucle, sin recurrir al operador potencia.
Nota: En C, para poder usar la función potencia (pow(x, y)=xy) es necesario incluir la biblioteca math (#include <math.h>). */

int main()
{

    int base = 5, exponente = 3, resultado = 0;

    printf("Utilizando la funcion pow de la biblioteca <math.h>:\n");
    printf("La potencia de %d elevado a %d es = %0.f\n", base, exponente, (pow(base, exponente)));

    printf("\nUtilizando un bucle For:");
    for (int i = 0; i < exponente; i++)
    {
        int aux = base * base;
        resultado = aux * base;
    }
    printf("\nLa potencia de %d elevado a %d es = %d", base, exponente, resultado);

    return 0;
}