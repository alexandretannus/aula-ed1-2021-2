#include <stdio.h>

void testarPonteiros(int valor, int *ref);
void dobrarValor(int *ref);

int main() {
	
	int x, y, *pont = 0;
	
	x = 854;
	y = 8;
	pont = &x;
	
	printf("x = %d\n", x);
	printf("Endereco x = %d\n", &x);
	printf("y = %d\n", y);
	printf("Endereco y = %d\n", &y);
	printf("pont = %d\n", pont); // endereco de referencia
	printf("Endereco pont = %d\n", &pont); // endereço do ponteiro
	printf("Conteudo pont = %d\n", *pont); // conteúdo do ponteiro
	
	//dobrarValor(&y);
	testarPonteiros(x, &y);
	//dobrarValor(&y);
	
	printf("\n\n --- Apos executar funcao --- \n\n");
	
	printf("x = %d\n", x);
	printf("Endereco x = %d\n", &x);
	printf("y = %d\n", y);
	printf("Endereco y = %d\n", &y);
	
	return 0;
}


void testarPonteiros(int valor, int *ref) {
	valor++;
	(*ref)++;
	printf("\n--- Dentro da Funcao ---\n");
	printf("Valor dentro da funcao: %d\n", valor);
	printf("Referencia dentro da funcao: %d\n", *ref);
}

void dobrarValor(int *ref) {
	(*ref) = (*ref)*2;
}
