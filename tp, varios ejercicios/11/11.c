#include <stdio.h>
#include <ctype.h> // biblioteca necesaria para usar la funcion tolower()

/* 11. Escriba un programa en C que lea un carácter y utilizando la instrucción switch determine si es o no una vocal.
Realice el mismo ejercicio utilizando la sentencia if ¿Qué opción es mejor? */

int main()
{

    char caracter;

    printf("Ingresa un caracter: ");
    scanf("%c", &caracter);

    switch (tolower(caracter)) // tolower() convierte el caracter en minuscula si es que fue ingresado en mayuscula.
    {
    case 'a':
        printf("%c es una vocal", caracter);
        break;
    case 'e':
        printf("%c es una vocal", caracter);
        break;
    case 'i':
        printf("%c es una vocal", caracter);
        break;
    case 'o':
        printf("%c es una vocal", caracter);
        break;
    case 'u':
        printf("%c es una vocal", caracter);
        break;

    default:
        printf("No es una vocal");
        break;
    }

   /* if (tolower(caracter) == 'a')
    {
        printf("%c es una vocal", caracter);
    }
    else if (tolower(caracter) == 'e')
    {
        printf("%c es una vocal", caracter);
    }
    else if (tolower(caracter) == 'i')
    {
        printf("%c es una vocal", caracter);
    }
    else if (tolower(caracter) == 'o')
    {
        printf("%c es una vocal", caracter);
    }
    else if (tolower(caracter) == 'u')
    {
        printf("%c es una vocal", caracter);
    }
    else
    {
        printf("No es una vocal");
    } */

    return 0;
}