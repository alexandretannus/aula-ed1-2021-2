#include <stdio.h>

int main() {
	
	int x, y, *pont;
	
	x = 2;
	y = 5;
	pont = &x;
	
	printf("x = %d\n", x);	
	printf("y = %d\n", y);	
	printf("Endereco x = %d\n", &x);	
	printf("Endereco y = %d\n\n", &y);
	
	printf("ponteiro = %d\n", pont);
	printf("endereco ponteiro = %d\n", &pont);
	printf("conteudo ponteiro = %d\n\n", *pont);
	
	x = 10;
	printf("conteudo ponteiro = %d\n\n", *pont);
}
