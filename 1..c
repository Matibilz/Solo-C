#include <stdio.h>
#include <stdlib.h>

/* Construya un algoritmo que permita generar y desplegar los N primeros numeros multiplos de
5 a continuacion del numero P si es par, o los N primeros numeros multiplos de 4 a continuacion
del numero P si es impar.

  ANALISIS
    1.1) VARIABLES
    1.2) FORMULAS
    1.3) SOLUCIONES
       1.3.1) Utilizar ciclo for
       1.3.2)
    1.4) DATOS DE PRUEBA
*/
int main(int argc, char *argv[]) {
	int i, num4, num5, n, menu;
	printf ("QUIERES IMPRIMIR MULTIPLOS DE 4 O DE 5\n1.PARA 4\n2.PARA 5\n");
	scanf ("%d", &menu);
	printf ("HASTA CUANDO QUIERES IMPRIMIR\n");
	scanf ("%d", &n); 
	switch (menu){
		case 1:	for (i=1; i<=n; i++){
			num4 = i*4;
			printf ("\n%d por 4 es = %d", i, num4);
	    } break;
 		case 2: for (i=0; i<=n; i++){
		   num5 = i*5;
		   printf ("\n%d por 5 es = %d", i, num5);
	    }break;
	}
	
	return 0;
}
