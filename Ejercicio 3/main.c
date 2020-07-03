#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ordenarCaracteres(char cadena[]){
	char aux;
	for(int i = 0; i<strlen(cadena) - 1; i++){
		for(int j = i+1; j<strlen(cadena); j++){
			if(cadena[i] > cadena [j]){
				aux = cadena[i];
				cadena[i] = cadena[j];
				cadena[j] = aux;
			}
		}
	}
}
