#include <stdio.h>
#include <stdlib.h>

/* Confeccione un algoritmo que permita solucionar el siguiente problema (ayudantia): 
leer 30 numeros entregar el promedio de los valores impares leidos */

/*
ANALISIS
    1.1) VARIABLE:
         1.1.1) int num, i, formula_promedio
    1.2) FORMULA:
         1.2.1) formula = num1/contador_impares
    1.3) SOLUCION:
         1.3.1) Iteración para generar 30 valores.
         1.3.2) Generar formula para crear el promedio de los numeros impares.
    1.4) DATOS DE PRUEBA:
*/

int main(int argc, char *argv[]) {
	int num, i, formula_promedio_impares = 0, contador_impares = 0, num_para_suma = 0;
	for (i=1; i<=30; i++){
		printf ("Escribe tu %d numero:\n", i);
		scanf ("%d", &num);
		if (num%2!=0){
			contador_impares++;
			printf ("%d, es impar.\n", num);
			printf ("Contador impares: %d\n", contador_impares);
			num_para_suma= num_para_suma+num;
		}
	}
	printf ("Promedio de numeros pares es: %d", formula_promedio_impares = num_para_suma/contador_impares);
	
	return 0;
}
