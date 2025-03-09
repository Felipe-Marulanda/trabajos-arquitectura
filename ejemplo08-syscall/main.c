#include <stdio.h>
#include <stdlib.h>


/*protoripo de la funcion*/
int suma(int, int);

int main(){

	int numero1 = 12;
	int numero2 = 26;
	int resultado;

	resultado = suma(numero1, numero2);
	printf("El resultado de %d + %d es %d", numero1, numero2, resultado);
	return 0;
}
