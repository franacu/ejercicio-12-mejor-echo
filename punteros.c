//
// Created by ELECTROHARD on 08/05/2023.
//
#include <stdio.h>
#include <string.h>
#include "punteros.h"

void cambiar(char *cadena)
{
    int longitud= strlen(cadena);
    char *inicio=cadena;                //cadena tiene 20 letras, asique inicio apunta adonde arranca "cadema"=0
    char *fin=cadena+longitud-1;
    printf("Cadena modificada:");// el fin de la cadena se encontrará en, *fin=0+20-1=19
    while(fin>=inicio)
    {
        printf("%c",*fin);
        fin--;
    }
}




