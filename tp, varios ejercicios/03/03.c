#include <stdio.h>

/* 3. Escriba un programa en C que pida un número al usuario e indique si es par o impar.
En caso de que sea par indicar si es o no múltiplo de 3. */

int main()
{

    int num;

    printf("Ingresa un numero: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("Es par.");

        if (num % 3 == 0){
            printf(" Y es multiplo de 3");
        }

    }
    else
    {
        printf("Es impar");
    }

    return 0;
}