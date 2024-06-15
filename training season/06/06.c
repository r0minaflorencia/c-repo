#include <stdio.h>

int main()
{

    int num, contador = 0, suma = 0;

    do
    {
        printf("\nIngresa un numero: ");
        scanf("%d", &num);
        printf("Has introducido: %d\n", num);

        if (num != 0)
        {
            contador++;
            suma += num;
        }
        else if (num == 0)
        {
            printf("Finalizando: Se ha introducido el numero 0.\n");
        }

    } while (num != 0);

    printf("\nCantidad de numeros ingresados: %d\nSuma de los nros ingresados: %d", contador, suma);

    return 0;
}
