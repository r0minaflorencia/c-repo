#include <stdio.h>

/* 7. Escriba un programa que solicite al usuario tres números enteros de una cifra y muestre
el mensaje "acceso permitido" si los números introducidos son “1”, “2” y “3”. */

int main()
{

    int digito1, digito2, digito3;

    printf("Ingresa la clave:\n");
    scanf("%d%d%d", &digito1, &digito2, &digito3);

    if (digito1 == 1 && digito2 == 2 && digito3 == 3)
    {
        printf("Acceso permitido.");
    }
    else
    {
        printf("Acceso denegado.");
    }

    return 0;
}