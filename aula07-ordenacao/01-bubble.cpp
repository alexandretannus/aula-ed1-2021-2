#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 10

void bubble_sort(int v[], int n);
void preencheVetor(int v[], int n);
void printVector(int v[], int n);


int main() {
	

	int vetor[TAMANHO];
	preencheVetor(vetor, TAMANHO);
	printVector(vetor, TAMANHO);
	
	bubble_sort(vetor, TAMANHO);
	printVector(vetor, TAMANHO);
	
}

void preencheVetor(int v[], int n) {
	srand(time(NULL));
	for (int i=0; i<n; i++) {
		v[i] = rand() % 100 + 1;
	}
}

void bubble_sort(int v[], int n) {
	int aux, trocas=0;
	
	for (int i=1; i <= n-1; i++) {
		for (int j=0; j < n-1; j++) {
			if (v[j] > v[j+1]) {
				printf("Troca %d -> %d\n", v[j], v[j+1]);
				aux = v[j+1];
				v[j+1] = v[j];
				v[j] = aux;	
				trocas++;
			}
			
		}
		printVector(v, n);
	}
	printf("Numero de trocas: %d\n", trocas);
}

void printVector(int v[], int n) {
	for (int i=0; i<n; i++) {
		printf("%3d ", v[i]);
	}
	printf("\n");
}

