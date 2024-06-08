#include <stdio.h>

/* 9. Escriba un programa en C que permita introducir 5 números enteros por teclado y muestre el menor de ellos. */

int main()
{

    int num1, num2, num3, num4, num5, menorNum;

    printf("Ingresa 5 numero/s: \n");
    scanf("%d%d%d%d%d", &num1, &num2, &num3, &num4, &num5);

    if (num1 < num2 && num1 < num3 && num1 < num4 && num1 < num5)
    {
        menorNum = num1;
    }
    else if (num2 < num1 && num2 < num3 && num2 < num4 && num2 < num5)
    {
        menorNum = num2;
    }
    else if (num3 < num1 && num3 < num2 && num3 < num4 && num3 < num5)
    {
        menorNum = num3;
    }
    else if (num4 < num1 && num4 < num2 && num4 < num3 && num4 < num5)
    {
        menorNum = num4;
    }
    else if (num5 < num1 && num5 < num2 && num5 < num3 && num5 < num4)
    {
        menorNum = num5;
    }

    printf("El numero menor es: %d", menorNum);

    return 0;
}