#include <stdio.h>

int main()
{

    int limite;

    printf("Ingresa el limite a imprimir: ");
    scanf("%d", &limite);

    for (int i = 0; i <= limite; i += 5)
    {
        if (i != 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}