#include <stdio.h>
#include <stdlib.h>

void imprimirMensagem(int *ponteiro, int tamanho);

int main() {
	
	int num = 10;
	int *p;
	
	p = (int *) malloc(num*sizeof(int));
		
	for (int i=0; i<num; i++) {
		printf("int[%d] = %d \t end: %d\n", i, p[i], &p[i]);
	}
	
	num = 20;
	realloc(p, num*sizeof(int));	
	
	printf("\n\n");
	for (int i=0; i<num; i++) {
		printf("int[%d] = %d \t end: %d\n", i, p[i], &p[i]);
	}
	
	free(p);
	
	printf("\n\n Após liberação de memória \n  ");
	printf("int[0] = %d \t end: %d\n", p[0], &p[0]);
	return 0;
}

void imprimirMensagem(int *ponteiro, int tamanho) {
	
	if (!ponteiro) {
		printf("Memória insuficiente\n");
	} else {
		printf("%d bytes alocados\n", tamanho);
	}
	
}
