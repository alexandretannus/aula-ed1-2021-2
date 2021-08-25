#include <stdio.h>
#include <stdlib.h>

void imprimirMensagem(char *ponteiro, int tamanho);

int main() {
	
	int num = 10;
	char *p;	
	
	p = (char *) malloc(num);
	
	p1[5] = 'R';
	
	for (int i=0; i<num; i++) {
		printf("%c\n", p[i]);
	}
	
	imprimirMensagem(p, num);
	
	return 0;
}

void imprimirMensagem(char *ponteiro, int tamanho) {
	
	if (!ponteiro) {
		printf("Memória insuficiente\n");
	} else {
		printf("%d bytes alocados\n", tamanho);
	}
	
}
