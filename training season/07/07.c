#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/* 7. Escriba un programa que pida al usuario su nombre y contraseña y le de tres oportunidades para introducir los datos correctos,
que serán root y 1234. Si los datos introducidos son correctos se mostrará por pantalla “Bienvenido al sistema”.
En caso contrario se mostrará un mensaje por pantalla indicando que se ha superado el número de intentos permitido.
Notas:
Puesto que las cadenas de caracteres finalizan con el carácter nulo (‘\0’),
usuario y contraseña se declararán como cadenas de longitud 5 (char usuario[5]).
Para leer cualquiera de estas cadenas con la función scanf se usará el descriptor de formato %s y dado que el nombre de la cadena
ya es una dirección, éste no debe ir precedido del símbolo &(scanf(“%s”, usuario)).
Para comparar cadenas se debe usar la función strcmp (string compare), por ejemplo strcmp(usuario, "root"),
que devolverá un 0 si las cadenas son iguales y otro valor si son distintas. */

int main()
{

    int intentos = 3;
    char usuario[5], clave[5];
    bool ingreso = false;

    while (intentos > 0 && !ingreso)
    {

        printf("Usuario: ");
        scanf("%s", usuario);
        printf("Contraseña: ");
        scanf("%s", clave);

        if (strcmp(usuario, "root") == 0 && strcmp(clave, "1234") == 0)
        {
            printf("Bienvenido/a al sistema");
            ingreso = true;
        }
        else
        {
            intentos--;
            printf("\nIngresaste usuario o contraseña incorrecta, te quedan %d intentos.\n", intentos);
        }
    }

    return 0;
}