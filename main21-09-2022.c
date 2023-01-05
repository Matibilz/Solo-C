#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int contador_par = 0, contador_impar = 0, contador_cero = 0, numero, a = 0;
	float promedio_par = 0, promedio_impar = 0, suma_par = 0, suma_impar = 0;
	char respuesta;
	
	printf ("Digita un numero\n");
	scanf ("%d", &numero);
	    
	do{
		printf ("Quieres digitar un numero?\nY/N\n");
	    scanf ("%c", &respuesta);
	    system("PAUSE");
	    printf ("Digita un numero\n");
		scanf ("%d", &numero);
		if (numero%2==0 && numero>0){ // si es par
			contador_par = contador_par+1;
			suma_par = suma_par +1;
		}
		
		else if (numero%2!=0){ //si es impar
			contador_impar = contador_impar+1;
			suma_impar = suma_impar +1;
		}
		
		if (numero==0){
			contador_cero = contador_cero+1;
		}	
	}while(respuesta != 'Y' || respuesta != 'y');
	
	promedio_par = suma_par/contador_par;
	promedio_impar = suma_impar/contador_impar;
	
	printf ("Hay %d ceros\n", contador_cero);
	printf ("Hay %d numeros par\n", contador_par);
	printf ("Hay %d numeros impares\n", contador_impar);
	printf ("La suma de los numeros pares es %.2f", promedio_par);
	printf ("La suma de los numeros impares es %.2f", promedio_impar);
	
	return 0;
}
