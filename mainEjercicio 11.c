#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* PROBLEMATICA:
                ANALISIS
    ::::::::::::::::::::::::::::::::
	1) PROBLEMA PRINCIPAL:
	2) PROBLEMA SECUNDARIO: 
	4) VARIABLES:
	5) FORMULAS:
	6) DATOS DE PRUEBA:
	::::::::::::::::::::::::::::::::
	*/

int main(int argc, char *argv[]) {
    int cateto_uno, cateto_dos;
	double hipotenusa;
	
	printf ("Digite la longitud del cateto 1\n");
	scanf ("%d", &cateto_uno);
	printf ("Digite la longitud del cateto 2\n");
	scanf ("%d", &cateto_dos);
	
	hipotenusa = pow(cateto_uno, 2) + pow(cateto_dos, 2);
	
	printf ("Longitud de la hipotenusa es: %.2lf", sqrt(hipotenusa));
	
	return 0;
}
