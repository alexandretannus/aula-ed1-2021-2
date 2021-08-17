#include <stdio.h>

int main() {
	
	int contador = 0, soma = 0;
	
	do {
		soma += contador;
		contador++;
		printf("contador: %d \t soma: %d\n", contador, soma);
	} while (contador<10);
	
	return 0;
}
