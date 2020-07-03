#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char invertirCadena(char cadenaInvertir[])
{

    char cadenaInvertida[4090];
    int largo;
    char aux;
    int i;

    if(cadenaInvertir!=NULL)
    {

        largo=0;
    }
    for(i=0; i<largo; i++)
    {

        aux=cadenaInvertir[i];
        cadenaInvertida[largo-i]=aux;
    }
    return cadenaInvertida;
}
