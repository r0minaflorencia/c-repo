#include <stdio.h>

/* 4. Escriba un programa en C que pida dos números enteros al usuario, y determine cuál es
mayor, el primero o el segundo. Modifíquelo para considerar también la posibilidad de
que sean iguales. */

int main()
{

    int num1, num2;

    printf("Ingresa dos numeros enteros:\n");
    scanf("%d%d", &num1, &num2);

    if (num1 > num2)
    {
        printf("%d es mayor que %d", num1, num2);
    }
    else if (num1 < num2)
    {
        printf("%d es mayor que %d", num2, num1);
    }
    else
    {
        printf("Son iguales");
    }

    return 0;
}