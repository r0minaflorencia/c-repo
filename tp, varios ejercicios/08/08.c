#include <stdio.h>

/* 8. Escriba un programa que solicite un número, y si éste es de dos cifras, muestre por
pantalla los siguientes valores:
 Suma de sus dos dígitos.
 Cuántos de sus dígitos son pares.
Nota: para saber si es de dos cifras, compárelo con 9 y 99. Para calcular los dígitos use
la división entera y el resto. */

int main()
{

    int num; // por el momento declaro una variable.

    printf("Ingresa un numero entero: "); // pido el valor
    scanf("%d", &num);                    // guardo el valor

    if (num > 9 && num < 100)
    { // se verifica si el numero es de dos cifras mediante una comparación de num con 9 y 99

        // si entramos a este bloque de codigo es porque el num es de dos cifras, entonces creamos una variable para cada digito
        int digito1, digito2;

        // utilizando la division y el resto extraigo los digitos individualmente:
        digito1 = num / 10;
        digito2 = num % 10;

        // calculo e imprimo la suma:
        printf("La suma de %d + %d es = %d", digito1, digito2, (digito1 + digito2));

        // calculo los pares:
        int contador_pares = 0; // comienza con un valor inicial de 0

        if (digito1 % 2 == 0)
        {
            contador_pares++;
        }
        if (digito2 % 2 == 0)
        {
            contador_pares++;
        }

        // mostrar pares:
        printf("\nHay %d numero/s par/es", contador_pares);
    }
    else
    {
        /* Si llegamos a esta parte del codigo es porque el num ingresado no es de dos cifras */
        printf("El numero ingresado no es de dos cifras.");
    }

    return 0;
}