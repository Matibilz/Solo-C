#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.1415
/* 
Escribir un algoritmo que permita calcular el are de un rectangulo, extrayendole el area de un circulo completamente contenido
dentro del rectangulo. El area achurada de la figura representa el area que se debe obtener.
Los datos a ingresar son largo de los lados del rectangulo (a y b) y el radio del circulo (r).
El algoritmo debe validar que el diametro del circulo sea menor que los lados a y b del rectangulo.
        ANALISIS
        ::::::::::::::::::::::::
        1) PROBLEMA PRINCIPAL: CALCULAR EL AREA DEL RECTANGULO Y DEL CIRCULO
        2) PROBLRMA SECUNDARIO: VALIDAR QUE EL DIAMETRO DEL RECTANGULO DEBE SER MAYOR QUE EL DEL CIRCULO
        3) CONCLUSIONES: 
        4) VARIABLES: int largo_rectangulo, ancho_rectangulo, radio_ciruclo;
        5) FORMULAS:
        6) DATOS DE PRUEBA:
        ::::::::::::::::::::::::
*/

int main(int argc, char *argv[]) {
	float largo_rectangulo, ancho_rectangulo, radio_circulo, area_rectangulo, area_circulo, area_restante;
	
	printf ("Digite el largo de su rectangulo:\n");
	scanf ("%f", &largo_rectangulo);
	printf ("Digite el ancho de su rectangulo:\n");
	scanf ("%f", &ancho_rectangulo);
	printf ("Digite el radio del circulo:\n");
	scanf ("%f", &radio_circulo);
	
	area_rectangulo = largo_rectangulo*ancho_rectangulo;
	area_circulo = pi*pow(radio_circulo, 2);
	area_restante = area_rectangulo-area_circulo;
	
	if (area_rectangulo>area_circulo){
		printf ("El area del rectangulo es %.2f\n", area_rectangulo);
	    printf ("El area del circulo %.2lf\n", area_circulo);
	    printf ("El area restando %f", area_restante);
	}
	
	else {
		printf ("El area del circulo debe ser menor que el area del rectangulo\n");
		printf ("El area del rectangulo es %.2f\n", area_rectangulo);
	    printf ("El area del circulo %.2lf\n", area_circulo);
	}
	
	
	
	return 0;
}
