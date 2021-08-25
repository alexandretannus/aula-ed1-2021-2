#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char *p, *pc;
	int np = 5;
	
	p = (char *) malloc(np * sizeof(char));
	pc = (char *) calloc(np, sizeof(char));
		
		
	printf("\n --- Malloc \n\n");
	for (int i=0; i<np; i++) {
		printf("endereco p[%d] = %d\n", i, &p[i]);
		printf("valor p[%d] = %c\n\n", i, p[i]);
	}
	
	printf("\n --- Calloc \n\n");
	
	for (int i=0; i<np; i++) {
		printf("endereco pc[%d] = %d\n", i, &pc[i]);
		printf("valor pc[%d] = %c\n\n", i, pc[i]);
	}
	
	return 0;
}
