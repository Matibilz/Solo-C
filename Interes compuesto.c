#include <stdio.h>
#include <stdlib.h>

/* */

int main(int argc, char *argv[]) {
	int valor_inicial = 10000, i_mes, valor_compuesto;
	
	for (i_mes = 1; i_mes<=120; i_mes++){
		valor_compuesto = (valor_inicial+valor_inicial+0.10);
		printf ("Valor ganancia: mes %d : %d\n", i_mes, valor_compuesto);
	}
	return 0;
}
