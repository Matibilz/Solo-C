#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define max 5
/*  */

void mostrar_ultimo_elemento(int vector[],int  largo){ //Llamaos funcion para imprimir los elementos de la funcion, solo lo hago para llamar a la funcion y ahorrar tiempo.
		int iterador;
		for (iterador = 0; iterador<largo; iterador++){
             printf ("[%d]", vector[iterador]);
		}
		
	}
void inicializa_vector(int vector[], int largo){
	int iterador;
	for (iterador = 0; iterador<largo; iterador++) vector[iterador]=0;
}

int main(int argc, char *argv[]) {
	int vector[max], iterador, suma = 0, largo = 5;
	
	printf ("Digite 5 datos enteros de entrada:\n");
	
	for (iterador = 0; iterador<max; iterador++){ //Inicalizacion de datos para la matriz.
		scanf ("%d", &vector[iterador]);
	}
	printf ("::::::::::::\n");
	for (iterador = 0; iterador<max; iterador++){ //Imprimir la matriz en orden creciente y sumar los elementos.
		printf ("%d\n", vector[iterador]);
		suma = suma+vector[iterador];
	}
	printf ("::::::::::::\n");
	inicializa_vector (vector, 5); //Limpiar el vector.
	printf ("La suma es: %d\n", suma); //Suma de n-elementos del vector
	printf ("::::::::::::\n");
	for (iterador = max-1; iterador>=0; iterador--){ //Imprimir la matriz en orden decreciente.
		printf ("%d\n", vector[iterador]);
	}
    printf ("::::::::::::\n");
	for (iterador = 0; iterador<max; iterador++){ // Modificar un elemento en orden creciente.
		vector[iterador]= 3*vector[iterador];
		printf ("%d\n", vector[iterador]);
	}
	printf ("::::::::::::\n");
	for (iterador = max-1; iterador>=0; iterador--){ //Modificar un elemento en orden decreciente.
		vector[iterador]=3*vector[iterador];
		printf ("%d\n", vector[iterador]);
	}
	printf ("::::::::::::\n");
	
	return 0;
}
