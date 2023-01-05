#include <stdio.h>
#include <stdlib.h>

/* 
Confeccionar un algoritmo que permita leer una cantidad variable de numeros, hasta que se
hayan ingresado 70 numeros pares, y que finalmente indique de la serie de numeros lo siguiente.
    1. Total de numeros pares e impares.
    2. Promedio de los numeros pares, impares y el general

ANALISIS
    1.1) VARIABLES: 
        1.1.1) int control_numeros_par = 
        1.1.2) int control_numeros_impar =
        1.1.3) int promedio_numeros_par =
        1.1.4) int promedio_numeros_impar = 
        1.1.5) int promedio_numeros_general =
        1.1.6) int numero = 
        1.1.7) int numero_par =
        1.1.8) int numero_impar =
        1.1.9) int numero_general = 
    1.2) FORMULAS:
    1.3) SOLUCIONES:
        1.3.1) Generar ciclo para la entrada de n numeros.
    1.4) DATOS DE PRUEBA:
 */

int main(int argc, char *argv[]) {
	int control_numeros_par = 0, numero, control_numeros_impar = 0, numero_par = 0, numero_impar = 0, numero_general = 0, control_numeros_general = 0;
	float promedio_numeros_par = 0, promedio_numeros_impar = 0, promedio_numeros_general = 0;
	do{
		printf ("Digita un numero\n");
		scanf ("%d", &numero);
		if (numero == 0){
			control_numeros_general--;
		}
		if (numero%2==0){
			control_numeros_par++;
			numero_par = numero_par+numero;
			if (numero == 0){
				control_numeros_par--;
			}
		}
		else {
			control_numeros_impar++;
			numero_impar = numero_impar+numero;
			if (numero == 0){
				control_numeros_impar--;
			}
		}
		numero_general = numero_general+numero;
		control_numeros_general++;
	}while(control_numeros_par<10);
	
	promedio_numeros_par = numero_par/control_numeros_par;
	promedio_numeros_impar = numero_impar/control_numeros_impar;
	promedio_numeros_general = numero_general/control_numeros_general;
	
	printf ("Hay %d numeros pares\n", control_numeros_par);
	printf ("Hay %d numeros impares\n", control_numeros_impar);
	printf ("El promedio de los numeros pares es %f\n", promedio_numeros_par);
	printf ("El promedio de los numeros impares es %f\n", promedio_numeros_impar);
	printf ("El promedio general de los numeros ingresados es %f\n", promedio_numeros_general);
	return 0;
}
