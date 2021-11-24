#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 10

void selection_sort(int v[], int n);
void preencheVetor(int v[], int n);
void printVector(int v[], int n);


int main() {
	

	int vetor[TAMANHO];
	preencheVetor(vetor, TAMANHO);
	printVector(vetor, TAMANHO);
	
	selection_sort(vetor, TAMANHO);
	printVector(vetor, TAMANHO);
	
}

void preencheVetor(int v[], int n) {
	srand(time(NULL));
	for (int i=0; i<n; i++) {
		v[i] = rand() % 100 + 1;
	}
} 

int seleciona(int v[], int n) {
	int i = 0;
	for (int j=1; j<n; j++) {
		if (v[i] < v[j]) {
			i = j;
		}
	}
	
	return i;
}

void selection_sort(int v[], int n) {
	int aux;
	while (n>1) {		
		int k = seleciona(v, n);
		printf("Indice: %d \t Maior valor: %d\n ", seleciona(v, n), v[seleciona(v, n)]);
		
		aux = v[n-1];
		v[n-1] = v[seleciona(v, n)];
		v[seleciona(v, n)] = aux; 
		
		printf("Troca %d -> %d\n", v[k], v[n-1]);
		printVector(v, n);
			
		 
		n--;
	}
}

void printVector(int v[], int n) {
	for (int i=0; i<n; i++) {
		printf("%3d ", v[i]);
	}
	printf("\n");
}

