#include <stdio.h>
#define ORDEM 3


void imprimirMatriz(int matriz[][ORDEM]);
void somarMatriz(int matriz[][ORDEM]);

int main() {	
	
	int matriz[ORDEM][ORDEM] = {
		{5, 6, 2},
		{2, 4, 8},
		{3, 1, 0}
	};
	
	imprimirMatriz(matriz);
	printf("\n\n");
	somarMatriz(matriz);
	imprimirMatriz(matriz);
	
	return 0;
}

void imprimirMatriz(int matriz[][ORDEM]) {
	
	for(int i=0; i<ORDEM; i++) {
		for (int j=0; j<ORDEM; j++) {
			printf("%4d ", matriz[i][j]);
		}
		printf("\n");
	}
	
}

void somarMatriz(int matriz[][ORDEM]) {
	for(int i=0; i<ORDEM; i++) {
		for (int j=0; j<ORDEM; j++) {
			matriz[i][j] += matriz[j][i];
		}
	}
}
