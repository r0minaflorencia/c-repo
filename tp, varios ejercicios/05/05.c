#include <stdio.h>

/*5. Escriba un programa en C que muestre por pantalla el valor de una entrada de cine en
función de los años de la persona. Así, el precio es de 7 Euros, pero si el usuario tiene
menos de 5 años se aplica un 60% de descuento, y si es mayor de 60 años, se aplicará
un descuento del 55 %. El precio de la entrada se debe declarar como una constante. */

#define PRECIO 7

int main()
{

    printf("Bienvenido/a al Cine\n");

    printf("Ingresa tu edad y se calculara el valor de la entrada: ");
    int edad;
    scanf("%d", &edad);

    float descuento, precioFinal;

    if (edad < 5)
    {
        descuento = (PRECIO * 60) / 100;
    }
    else if (edad > 60)
    {
        descuento = (PRECIO * 55) / 100;
    }
    else
    {
        printf("No tenes descuento. ");
    }

    precioFinal = PRECIO - descuento;
    printf("El valor es $%2.f", precioFinal);

    return 0;
}