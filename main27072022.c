#include <stdio.h>
#include <stdlib.h>

/* 
    ANALISIS
	_________________
    1) PROBLEMA PRINCIPAL: Generar la suma de todos los numeros comprendidos entre 1 y n.
    2) PROBLEMA SECUNDARIO: Generar un ciclo para el do while mientras el numero sea n<0 entonces no introducir al for.
    3) CONCLUSIONES: Generar un ciclo for para crear los numeros, un do while para validar que n>0
    4) VARIABLES: numero, iterador de incremento,  numero_suma, contador_numeros, promedio_sumas.
    5) FORMULAS: promedio_suma = numero_suma/contador_numeros
    6) DATOS DE PRUEBA:
    _______________________
    
*/

int main(int argc, char *argv[]) {
	
	int numero, i, numero_suma = 0, contador_numeros = 0;
	float promedio_suma;
	
	printf ("Cuantos numeros quieres generar?\n");
	scanf ("%d", &numero);
	
	do{
		if (numero<0){
			printf ("Error, debe ser >=0");
			printf ("Cuantos numeros quieres generar?\n");
	        scanf ("%d", &numero);
		}
	}while(numero<0); //Si el numero es menor a 0 entonces no seguir hasta.
	
	
	for (i=1; i<=numero; i++){ //Generar numeros.
		printf ("Generando %d numero\n", i);
		numero_suma = numero_suma + i;
		contador_numeros = contador_numeros + 1;
	}
	
	promedio_suma = numero_suma/contador_numeros;
	
	printf ("La suma de los numeros es: %d\n", numero_suma);
	printf ("Hay %d numeros\n", contador_numeros);
	printf ("El promedio de la suma de los numeros es: %.2f", promedio_suma);

	return 0;
}
