#include <stdio.h>
#include <stdlib.h>
#define elementos 50 //RECORDAR EMPEZAREMOS A RELLENAR EL ARREGLO DESDE EL ELEMENTO 0, POR LO TANTO, LLEGAREMOS HASTA EL 49 ELEMENTO.
/*
REALIZADO POR MATIAS GONZALEZ BILZ | ESTUDIANTE ING. CIVIL INFORMATICA UCSC | 1° AÑO.

Problematica: Un supermercado almacena los precios de sus productos en un arreglo de 50 elementos
en donde los productos perecibles están almacenados en las localizaciones pares, y los no perecibles en las impares
a) Llenar el arreglo: LISTO
b) Calcule la suma de los precios de los alimentos no perecibles: LISTO.
c) Aumente en un 10% el precio de todos los productos que valen menos de $1.000 y que son
perecibles: LISTO
d) Muestre por pantalla todos los códigos de los productos cuyo precio es mayor que el precio
promedio de todos los productos del supermercado: LISTO
e) Mostrar el menor y el mayor valor del elemento del arreglo junto con su posicion correspondiente: LISTO

1) Conclusiones:
 a) Suma_alimentos_perecibles = el valor se encuentra en una "casilla" de numero par.
 b) El precio del producto no puede ser menor o igual a 0.
 c) Si el valor de la posición [iterador] del arreglo es menor a 1000 y está en "casilla" par (perecible) entonces aumentar en un 10% su precio.
 d) Recorrer el arreglo, sumar todos los valores de sus elemento y calcular el promedio de la suma, volver a recorrer el arreglo y corroborar elemenos mayores a tal promedio y desplegarlos en pantalla.
 e) Inicializar variables "menor y mayor" en la posición 0 del arreglo y si el arreglos_precios[iterador]>mayor %% arreglos_precios[itrerador]<menor asignar a sus variables correspondientes y desplegarlos en la pantalla.
2) Formulas:
 a) suma+=arreglos_precios[iterador];
 b) diez_porciento = arreglos_precios[iterador]+arreglos_precios[iterador]*0.10; 
 c) suma_promedio+=arreglos_precios[iterador];
 d) menor = arreglos_precios[iterador];
 e) mayor = arreglos_precios[iterador];

Name of function: llenar_arreglos
Copyright: GNU
Author: Matías González Bilz
Date: 19-10-22
Description: Esta funcion permite llenar el arreglo de 50 elementos, no permite numeros <= 0.*/
void llenar_arreglos (float arreglos_precios[]){
	int iterador = 0;
	for (iterador = 0; iterador<elementos; iterador++){
		do{
			printf ("Digita el elemento %d del arreglo de precios\n", iterador);
			scanf ("%f", &arreglos_precios[iterador]);
		}while(arreglos_precios[iterador]<=0); //Mientras el numero sea menor o igual a 0, no salir del ciclo y no avanzar al siguente elemento.
	}
}

/*Name of function: mostrar_arreglos
	Copyright: GNU
	Author: Matías González Bilz
	Date: 19-10-22
	Description: Esta funcion permite mostrar el arreglo en pantalla.*/
void mostrar_arreglos(float arreglos_precios[]){
	int iterador = 0;
	for (iterador = 0; iterador<elementos; iterador++){printf ("[$%.1f]", arreglos_precios[iterador]);}
}

/*Name of function: mostrar_alimentos_noperecibles
	Copyright: GNU
	Author: Matías González Bilz
	Date: 20-10-22
	Description: Esta funcion permite desplegar en pantalla los valores de los productos no perecibles, es decir, aquellos que estan en una posicion impar y el valor total de la suma de sus valores.
	Posición | Valor | No Perecible | Total= 23.899
	0         100     
	1         900    SI
	2         56000   
	3         16000  SI
	4         560     
	5         5000   SI
	6         800     
	7         999    SI
	8         998    
	9         1000   SI*/
void mostrar_alimentos_noperecibles(float arreglos_precios[]){
	int iterador = 0;
	float suma = 0;
	for (iterador = 0; iterador<elementos; iterador++){
		if (iterador%2!=0){ //Si en la posicion que se encuentra es de numero impar, entonces sumar el valor de la casilla hasta n veces de "casillas" impares.
		suma+=arreglos_precios[iterador];
		printf ("[$%.1f] en la posicion %d\n", arreglos_precios[iterador], iterador);
		}
	}
	printf ("La suma del precio de los alimentos no perecibles es: $%.1f\n", suma);
}

/*Name of function: aumentar_10_porciento
	Copyright: GNU
	Author: Matías González Bilz
	Date: 20-10-22
	Description: Esta funcion permite aumentar en un 10% el precio de cada producto que sea menor a 1000 y que sea perecible(casilla par).
	DATOS DE PRUEBA
	Posición | Valor | Descuento?| 10% | Total
	0         100    Aplica       10   110.00
	1         900    No aplica
	2         56000  No aplica
	3         16000  No aplica
	4         560    Aplica       56     616.00
	5         5000   No aplica
	6         800    Aplica       80     880.00
	7         999    No aplica
	8         998    Aplica       99,8   1097,8
	9         1000   No aplica*/
void aumentar_10_porciento(float arreglos_precios[]){
	int iterador = 0;
	float diez_porciento;
	for (iterador = 0; iterador<elementos; iterador++){
		if (iterador%2==0 && arreglos_precios[iterador]<1000){ //Si el numero del iterador es par y el valor de la casilla es menor a mil entonces aplicar 10%
			diez_porciento = arreglos_precios[iterador]+arreglos_precios[iterador]*0.10; 
			printf ("[$%.2f] del elemento %d\n", diez_porciento, iterador);
		}
	iterador++; //No itera si no escribo esta linea :/¿
	}	
}

/*Name of function: precios_mas_grandes_al_promedio
	Copyright: GNU
	Author: Matías González Bilz
	Date: 20-10-22
	Description: Esta funcion permite desplegar en pantalla los precios de los alimentos mayores al promedio de la suma de todos los elementos.
	DATOS DE PRUEBA
	Posición | Valor |Mayor que promedio| Promedio = 8235.7
	0         100
	1         900
	2         56000    SI
	3         16000    SI
	4         560
	5         5000
	6         800
	7         999
	8         998
	9         1000*/ 
void precios_mas_grandes_al_promedio (float arreglos_precios[]){
	int iterador = 0, contador = 0, contador_mayores_promedio = 0;
	float promedio, suma_promedio = 0;
	for (iterador = 0; iterador<elementos; iterador++){
		suma_promedio+=arreglos_precios[iterador]; //Calcular suma de los valores de todos los elementos.
		contador++; //Contador de elementos.
		}
		promedio = suma_promedio/contador; //Calculo promedio.
	for (iterador = 0; iterador<elementos; iterador++){
		if (arreglos_precios[iterador]>promedio){
			contador_mayores_promedio++; //Contador aumenta +1 cada vez que encuentra un numero mayor al promedio.
			printf ("[$%.1f]\n", arreglos_precios[iterador]);
		}
	}
	printf ("Hay %d productos mayores al promedio = $%.2f", contador_mayores_promedio, promedio);
}

/*Name of function: buscar_mayor_menor
	Copyright: GNU
	Author: Matías González Bilz
	Date: 21-10-22
	Description: Esta funicion permite imprimir en pantalla precio del producto más barato y caro y comprobar si es perecible o no lo es.
	DATOS DE PRUEBA
	Posición | Valor |Mayor|Menor| Perecible | Promedio = 8235.7
	0         100            SI    SI
	1         900      
	2         56000    SI          SI
	3         16000   
	4         560
	5         5000
	6         800
	7         999
	8         998
	9         1000*/ 
void buscar_mayor_menor (float arreglos_precios[]){
    int iterador = 0, posicion, posicion_2;
    float menor = arreglos_precios[iterador]; //Inicializando "menor" en la posición arreglos_precios[0];
    float mayor = arreglos_precios[iterador]; //Inicializando "mayor" en la ""       ""
    for (iterador = 0; iterador<elementos; iterador++){
        if (arreglos_precios[iterador]<menor){//Si el valor de arreglos_precios[iterador] es menor a la variable "menor" entonces asignarlo a  
            posicion = iterador;
            menor = arreglos_precios[iterador];
        }
    }
    if (posicion%2==0){
        printf ("[$%.1f] es el menor valor y es un alimento perecible.\n", menor);
    }
    if (posicion%2!=0) {
        printf ("[$%.1f] es el menor valor y es un alimento no perecible.\n", menor);
    }
    for (iterador = 0; iterador<elementos; iterador++){
       if (arreglos_precios[iterador]>mayor){//Si el valor de arreglos_precios[iterador] es mayor a la variable "mayor" entonces asignarlo a
           posicion_2 = iterador;
           mayor = arreglos_precios[iterador];
       }
    }
    if (posicion_2%2==0){
        printf ("[$%.1f] es el mayor valor y es un alimento perecible.\n", mayor);
    }
    if (posicion_2%2!=0){
        printf ("[$%.1f] es el mayor valor y es un alimento no perecible.\n", mayor);
    }
}

int main(int argc, char *argv[]) {
	float arreglos_precios[elementos], numeros_aleatorios;
	printf ("[SUPERMERCADO LA_HERRADURA]\n");
	llenar_arreglos(arreglos_precios);
	printf ("\n\n");
	printf ("ARREGLO LLENADO Y DESPLEGADO\n");
	mostrar_arreglos(arreglos_precios);
	printf ("\n\n");
	printf ("ALIMENTOS NO PERECIBLES\n");
	mostrar_alimentos_noperecibles(arreglos_precios);
	printf ("\n\n");
	printf ("ALIMENTOS PERECIBLES CON VALOR MENOR A $1000 AUMENTADOS UN 10 PORCIENTO\n");
	aumentar_10_porciento(arreglos_precios);
	printf ("\n\n");
	printf ("LOS PRECIOS MAYORES AL PROMEDIO DE LA SUMA DE CADA VALOR DEL ARREGLO\n");
	precios_mas_grandes_al_promedio(arreglos_precios);
    printf ("\n\n");
    printf ("ELEMENTO MAYORES||MENORES\n");
    buscar_mayor_menor(arreglos_precios);
	return 0;
}
