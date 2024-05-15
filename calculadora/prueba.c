#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdbool.h>

void dividir(int n1, int n2)
{
    printf("\nEl resultado de la division entre n1 / n2 es: %i", (n1 / n2));
}

void multiplicar(int n1, int n2)
{
    printf("\nEl resultado de la multiplicacion entre n1 * n2 es: %i", (n1 * n2));
}

void restar(int n1, int n2)
{
    printf("\nEl resultado de la resta de n1 - n2 es: %i", (n1 - n2));
}

void sumar(int n1, int n2)
{
    printf("\nEl resultado de la suma de n1 + n2 es: %i", (n1 + n2));
}

int main()
{

    printf("\t Calculadora\n");

    int n1, n2;
    printf("Ingresa el primer nro: ");
    scanf("%i", &n1);
    printf("Ingresa el segundo nro: ");
    scanf("%i", &n2);

    bool exit = false;
    char opcion;

    do
    {
        printf("\n\tMenu");
        printf("\n a- Sumar\n b- Restar\n c- Multiplicar\n d- Dividir\n e- Salir\n");
        opcion = getche();

        switch (tolower(opcion))
        {
        case 'a':
            sumar(n1, n2);
            break;
        case 'b':
            restar(n1, n2);
            break;
        case 'c':
            multiplicar(n1, n2);
            break;
        case 'd':
            dividir(n1, n2);
            break;
        case 'e':
            printf("\nSaliendo del programa.");
            exit = true;
            break;
        default:
            printf("\nDebes ingresar una opcion valida.\n");
            break;
        }

    } while (!exit);

    return 0;
}
