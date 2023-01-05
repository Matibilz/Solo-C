#include <stdio.h>
#include <stdlib.h>

/* PROBLEMATICA: EL PROBLEMA ANTERIOR SE QUIERE COMPLEJIZAR DE ACUERDO CON LAS NUEVAS ENTRADAS Y SE NECESITA SU AYUDA NUEVAMENTE. PARA CADA ENTRADA SE DEBE GENERAR UN SUMA DE GAUSS. CONSIDERE QUE ADEMAS, QUE I PODRIA GENERARSE EN UN FUTURO.*/
/* 

                ANALISIS
    ::::::::::::::::::::::::::::::::
	1) PROBLEMA PRINCIPAL: Generar enesimas entradas y con ellas calcular la suma de gauss de cada entrada. 
	2) PROBLEMA SECUNDARIO: Generar el do-while.
	3) CONCLUSIONES:
	4) VARIABLES:
	5) FORMULAS:
	6) DATOS DE PRUEBA:
	::::::::::::::::::::::::::::::::
	*/

int main(int argc, char *argv[]) {
	double numero_entrada, iterador_entrada = 0, i, suma_numeros = 0, iterador_2, suma_de_cada_salida = 0;
	
	
	do{
		printf ("Cuantas entradas quieres generar?\n");
	    scanf ("%lf", &iterador_entrada);
	    if (iterador_entrada==0){
	    	printf ("Error debe ser un numero > 0\n");
	    	return;
		}
	}while(iterador_entrada<0);
	
	for (i=1; i<=iterador_entrada; i++){ //GENERAR N ENTRADAS
	    printf ("Genera tu %.lf entrada\n", i);
	    scanf ("%lf", &numero_entrada);
	    printf ("He generado el numero %.lf\n", numero_entrada);
	    if (numero_entrada<0){ //Si n es negativo entonces salir
	    	printf ("Tu numero debe ser >=0");
	    	break;
		}
		
		suma_numeros = (numero_entrada*(numero_entrada+1)/2); //FORMULA DE GAUS
		suma_de_cada_salida = suma_de_cada_salida + suma_numeros;
		printf (":::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
		printf ("La suma de gauss de tu %.lf entrada (numero: %.lf) es: %.3lf\n", i, numero_entrada, suma_numeros);
		printf (":::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
		suma_numeros = 0;
		printf ("--------------------------------------------\n");
		system ("PAUSE");
		printf ("--------------------------------------------\n");
	}
	printf ("La suma de todas las salidas es: %.lf\n", suma_de_cada_salida);
	printf (":::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	system ("PAUSE");
	
	
	return 0;
}
