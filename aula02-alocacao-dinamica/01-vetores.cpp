#include <stdio.h>

void imprimirVetor(int vetor[], int tamanho);
void dobrarValores(int vetor[], int tamanho);

int main() {
	
	int tamanho = 5;
	
	int vetor[] = {10, 8, 9, 4, 3};
	imprimirVetor(vetor, tamanho);
	
	dobrarValores(vetor, tamanho);
	imprimirVetor(vetor, tamanho);
	
	return 0;
}

void imprimirVetor(int vetor[], int tamanho) {
	for (int i = 0; i < tamanho; i++) {
		printf("%d\t", vetor[i]);
	}
	printf("\n");
}

void dobrarValores(int vetor[], int tamanho) {
	for (int i = 0; i < tamanho; i++) {
		vetor[i] *= 2;
	}
}
