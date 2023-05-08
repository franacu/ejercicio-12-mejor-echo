#include <stdio.h>
#include "punteros.h"


int main()
{
    char cadena[100];
    printf("ingrese cadena de caracteres:");
    gets(cadena);
    printf("La cadena escrita es: %s\n",cadena);
    cambiar(cadena);
    return 0;
}


