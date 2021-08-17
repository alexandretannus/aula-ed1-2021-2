#include <stdio.h>

int main() {
	
	
	int a, b, c;
	
	scanf("%d %d %d", &a, &b, &c);
	
	if (a < (b+c) && b < (a+c) && c < (a+b)) {
		printf("Eh triangulo");
	} else {
		printf("Nao eh triangulo");
		
	}
	
	
	return 0;
}
