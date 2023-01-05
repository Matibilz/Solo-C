#include <stdio.h>
#include <stdlib.h>

/* PROBLEMATICA: Construya un algoritmo que permita obtener el promedio de notas de un curso cualquiera, con
una cantidad variable de alumnos. Ademas debera indicar la cantidad de alumnos aprobados y
reprobados

                ANALISIS
    ::::::::::::::::::::::::::::::::
	1) PROBLEMA PRINCIPAL:  Obtener el promedio de notas de un curso con una cantidad variable de alumnos.
	2) PROBLEMA SECUNDARIO: Indicar la cantidad de alumnos reprobados y aprobados //Nota minima 4.0
	3) CONCLUSIONES:
	    3) Usar un do-while para generar la entrada enesima de la cantidad de alumnos
	4) VARIABLES:
	    4.1) int cantidad_de_alumnos, iterador, contador_aprovados, contador_rechazados
	    4.2) float nota_alumno, suma_promedios, promedio_notas
	5) FORMULAS:
	6) DATOS DE PRUEBA:
	::::::::::::::::::::::::::::::::
	*/

int main(int argc, char *argv[]) {
	
	float nota_alumno, suma_promedio = 0, promedio_notas;
	int cantidad_de_alumnos, iterador, contador_aprovados = 0 , contador_rechazados = 0;
	
	do{
		printf ("Cantidad de alumnos\n");
	    scanf ("%d", &cantidad_de_alumnos);
	}while(cantidad_de_alumnos<=0);
	

	for (iterador=1; iterador<=cantidad_de_alumnos; ++iterador){
		printf ("::::::::::::::::::::::\n");
		printf ("Digite la nota del %d alumno:\n", iterador);
		scanf ("%f", &nota_alumno);
		if (nota_alumno>7.0){
			printf ("La nota debe estar entre [1.0-7.0]\n");
			break;
		}
		if (nota_alumno<=0){
			printf ("No puede haber numeros negativos para la suma de promedios\n");
			break;
		}
		if (nota_alumno>=4.0){
			contador_aprovados+=1;
		}
		else if (nota_alumno<4.0){
			contador_rechazados +=1;
		}
		suma_promedio += nota_alumno;
	}
	system("PAUSE");
	promedio_notas = suma_promedio/cantidad_de_alumnos;
	printf ("::::::::::::::::::::::\n");
	printf ("El promedio general del curso fue : %.2f\n", promedio_notas);
	printf ("Hay %d alumnos aprovados\n", contador_aprovados);
	printf ("Hay %d alumnos reprovados\n", contador_rechazados);
	return 0;
}
