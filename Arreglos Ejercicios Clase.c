#include <stdio.h>
#include <stdlib.h>

/* 1 Construir una funcion que amplifique un vector por el valor de k.
   2 Construya una función que imprima un vector de tamaño n en 2 sentidos
    3 Construya una función que retorne la posición del elemento máximo de un arreglo de tamaño n (si hay 2 ó más máximo que retorne la primera ocurrencia).
    4 Construya una función que intercale los vectores y obtenga como resultante un tercer vector.
*/

void digitar_valores_vector (int vector[], int largo_vector){
	int iterador;
	for (iterador = 0; iterador<largo_vector; iterador++){
		printf ("Digita un valor para la posicion %d del vector\n", iterador);
		scanf ("%d", &vector[iterador]);
		printf ("[%d]\n", vector[iterador]);
	}
}
void digitar_valores_vector_b (int vector_b[], int largo_vector){
	printf ("Para la segunda matriz\n");
	int iterador;
	for (iterador = 0; iterador<largo_vector; iterador++){
		printf ("Digita un valor para la posicion %d del vector\n", iterador);
		scanf ("%d", &vector_b[iterador]);
		printf ("[%d]\n", vector_b[iterador]);
	}
}

void lectura_de_vector (int vector[], int largo_vector){
	int iterador;
    for (iterador = 0; iterador<largo_vector; iterador++){
    	printf ("[%d]", vector[iterador]);
	}	
}

void lectura_de_vector_b (int vector_b[], int largo_vector){
	int iterador;
	for (iterador = 0; iterador<largo_vector; iterador++){
		printf ("[%d]", vector_b[iterador]);
	}
}

void el_mayor_de_vector (int vector[], int largo_vector){
	int iterador;
	int mas_grande = -1000;
	for (iterador = 0; iterador<largo_vector; iterador++){
		if (vector[iterador]>mas_grande){
			mas_grande = vector[iterador];
		}
	}
	printf ("\n[%d], el mayor elemento del vector A", mas_grande);
}

void funcion_recorrido_izquierda_y_derecha (int vector[], int largo_vector){
	int iterador;
	for (iterador = 0; iterador<largo_vector; iterador++){ //Izquierda a derecha
		printf ("[%d] ", vector[iterador]);
	}
	printf ("\n");
	for (iterador = largo_vector-1; iterador>=0;iterador--){ //De derecha a izquierda
		printf ("[%d] ", vector[iterador]);
	}
}

void intercambio_de_vector (int vector[], int vector_b[], int largo_vector){
	printf ("\nIntercambio de matrices:\n");
	int iterador, auxiliar;
	for (iterador = 0; iterador<largo_vector; iterador++){
		auxiliar = vector[iterador];
		vector[iterador]=vector_b[iterador];
		vector_b[iterador]= auxiliar;
		printf ("[%d]", vector_b[iterador]);
	}
}

void desplazamiento_inteligente (int vector[], int largo_vector, int sentido_desplazamiento){
	int iterador;
	printf ("\nEn que sentido quieres mostrar los valores:\n1 Para Izquierda a Derecha\n2 Para Derecha a Izquierda\n");
	scanf ("%d", &sentido_desplazamiento);
	switch (sentido_desplazamiento){
		case 1: for (iterador = 0; iterador<largo_vector; iterador++){ printf ("[%d] ", vector[iterador]);} break; //Izquierda a derecha
		case 2: for (iterador = largo_vector-1; iterador>=0;iterador--){printf ("[%d] ", vector[iterador]);} break; //De derecha a izquierda
	}
}

void intercalar_vectores (int vector[], int vector_b[], int vector_c[], int largo_vector){
	int iterador = 0, iterador_2 = 0;
	printf ("\nVamos a intercalar los valores de cada vector para introducirlos en otra matriz\n");

	}
}
int main(int argc, char *argv[]) {
	int k, largo_vector, vector[largo_vector], vector_b[largo_vector], vector_c[largo_vector], auxiliar, mas_grande = -1000, pos = 0, sentido_desplazamiento;
	printf ("Cuantos elementos tiene el vector?\n");
	scanf ("%d", &largo_vector);
	digitar_valores_vector(vector, largo_vector);
	digitar_valores_vector_b (vector_b, largo_vector); //Ambas matrices tienes el mismo orden
	printf ("Matriz:\n");
	lectura_de_vector (vector, largo_vector);
	printf ("\n");
	lectura_de_vector_b (vector_b, largo_vector);
	printf ("\n");
	printf ("Primero de izquierda a derecha, segundo derecha a izquierda\n");
	funcion_recorrido_izquierda_y_derecha (vector, largo_vector);
	el_mayor_de_vector (vector, largo_vector);
	intercalar_vectores (vector, vector_b, vector_c, largo_vector);
	intercambio_de_vector (vector, vector_b, largo_vector); //Se mostrará el vector_b con los valores de vector_a;
	return 0;
}
