#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int *p;
	
	p = (int *) calloc(20, sizeof(int));
	
	p[3] = 30;
	
	for (int i=0; i<20; i++) {
		printf("%d\n", p[i]);
	}
	
	return 0;
}
