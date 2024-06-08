#include <stdio.h>

/* 10. Escriba un programa en C que, introducidos por teclado tres valores enteros, los muestre en pantalla de mayor a menor. */

int main()
{

    int n1, n2, n3, menor, medio, mayor;

    printf("Ingresa tres valores enteros: \n");
    scanf("%d%d%d", &n1, &n2, &n3);

    if (n1 >= n2 && n1 >= n3)
    {
        mayor = n1;
        if (n2 >= n3)
        {
            medio = n2;
            menor = n3;
        }
        else
        {
            medio = n3;
            menor = n2;
        }
    }
    else if (n2 >= n1 && n2 >= n3)
    {
        mayor = n2;
        if (n1 >= n3)
        {
            medio = n1;
            menor = n3;
        }
        else
        {
            medio = n3;
            menor = n1;
        }
    }
    else
    {
        mayor = n3;
        if (n1 >= n2)
        {
            medio = n1;
            menor = n2;
        }
        else
        {
            medio = n2;
            menor = n1;
        }
    }

    printf("Los numeros ordenados de mayor a menor son: %d %d %d", mayor, medio, menor);

    return 0;
}