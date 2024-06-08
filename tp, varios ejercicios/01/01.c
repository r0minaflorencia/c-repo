#include <stdio.h>

/* 1. Escriba un programa que lea un número entero y escriba un mensaje si el número es mayor que 100 */

int main()
{

    int num;

    printf("Ingresa un numero entero: ");
    scanf("%d", &num);

    if (num > 100)
    {
        printf("El numero ingresado es mayor a 100");
    }

    return 0;
}