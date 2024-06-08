#include <stdio.h>

/* 13. Escriba un programa en C que muestre el siguiente menú:
CALCULO DE AREAS
===========================
1 - Calcular el área de un triángulo
2 - Calcular el área de un trapecio
3 - Calcular el área de un rectángulo
Tras mostrar el menú, se solicitará al usuario que seleccione una opción. En función de la opción seleccionada el programa deberá
pedir los datos necesarios para calcular el área, realizar el cálculo y mostrar el resultado por pantalla.
Nota: Recuerde que para usar la función raíz cuadrada (sqrt) debe incluir la librería math.h. */

int main()
{

    int opcion, area, altura;

    printf("\tCalculo de areas");
    printf("\n1 - Calcular el area de un triangulo\n2 - Calcular el area de un trapecio\n3 - Calcular el area de un rectangulo\n");
    scanf("%d", &opcion);

    switch (opcion)
    {
    case 1:

        int base;
        printf("Ingresa base del triangulo: ");
        scanf("%d", &base);
        printf("Altura: ");
        scanf("%d", &altura);

        area = (base * altura) / 2;
        printf("\t El area del triangulo es de %d", area);

        break;
    case 2:

        int base1, base2;
        printf("Ingresa la primer base: ");
        scanf("%d", &base1);
        printf("Segunda base: ");
        scanf("%d", &base2);
        printf("Altura: ");
        scanf("%d", &altura);

        area = ((base1 + base2) * altura) / 2;
        printf("\t El area del trapecio es de %d", area);

        break;
    case 3:

        float largo, ancho;
        printf("Ingresa el largo del rectangulo: ");
        scanf("%f", &largo);
        printf("Ancho: ");
        scanf("%f", &ancho);

        area = largo * ancho;
        printf("\t El area del rectangulo es de %d", area);

        break;
    default:
        printf("No ingresaste una opcion valida");
        break;
    }

    return 0;
}