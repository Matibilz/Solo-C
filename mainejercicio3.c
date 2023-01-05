#include <stdio.h>
#include <stdlib.h>

/* Escribir un algoritmo que realice la pregunta ¿Desea continuar S/N? y que no deje de hacerla
hasta que el usuario teclee N (en clases)*/

int main(int argc, char *argv[]) {
	
	char alternativa;
	do{
		printf ("¿Desea continuar S/N? ");
		scanf ("%c", &alternativa);
	}while(alternativa != 'N');
	
	printf ("SALISTES");
	return 0;
}
