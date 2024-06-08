#include <stdio.h>

/* 2. Escriba un programa en C que pida dos números enteros al usuario, y determine si el
primero es divisible entre el segundo. */

int main()
{

    int num1, num2;

    printf("Ingresa el primer numero entero: ");
    scanf("%d", &num1);
    printf("Ahora ingresa el segundo numero entero: ");
    scanf("%d", &num2);

    if (num1 % num2 == 0)
    {
        printf("Es divisible");
    }

    return 0;
}