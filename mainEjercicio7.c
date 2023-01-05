#include <stdio.h>
#include <stdlib.h>

/* 
Confeccione un algoritmo que genere la siguiente serie: 1010, 1020, 1030, 1040, 1050, ..........., 10,000.

ANALISIS
    1.1) VARIABLES:
	    1.1.1) int numero = 10000;
    1.2) FORMULAS:
	    1.2.1) numero = numero+10;
    1.3) SOLUCIONES:
        1.3.1) Do While para que mientras sea verdadera la condicion iterar hasta llegar a 10000, sumando 10 a numero en cada iteracion.
    1.4) DATOS DE PRUEBA:
 */

int main(int argc, char *argv[]) {
	int numero = 1000;
	do{
		numero = numero+10;
		printf ("%d\n", numero);
	}while(numero<10000);
	
	return 0;
}
