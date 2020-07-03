#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	char* nombre[20];
	int infectados;
	int recuperados;
	int muertos;
}ePais;

void actualizarRecuperados(ePais list, char nombre[], int recuperados){
	for(int i = 0; i<strlen(list); i++){
		if(list[i].nombre == nombre){
			list[i].recuperados = list[i].recuperados + recuperados;
		}
	}
	return recuperados;
}

// para poder utilizar bien el strlen tendria que tener la longitud maxima del array de estrucuturas
