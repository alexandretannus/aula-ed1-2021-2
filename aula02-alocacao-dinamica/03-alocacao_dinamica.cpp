#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int *p;
	
	p = (int *) malloc(sizeof(int));
	
	if (!p) {
		printf("Memoria insuficiente\n");
	} else {
		printf("Memoria alocada com sucesso\n");
	}
	
	return 0;
}

