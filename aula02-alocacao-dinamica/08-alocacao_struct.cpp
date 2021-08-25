#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char nome[30];
	int idade;
} Pessoa;

int main() {
	
	//printf("Tamanho da struct pessoa: %d", sizeof(Pessoa));
	Pessoa *pessoa = (Pessoa *) malloc(sizeof(Pessoa));
	
	pessoa->idade = 30;
	strcpy(pessoa->nome, "Alexandre Moraes Tannus");
	//pessoa->nome = "Alexandre";
	
	for (int i=0; i<30; i++) {
		printf("nome[%d] = %c\n", i, pessoa->nome[i]);
	}
	printf("\n\n");
	printf("Nome: %s\n", pessoa->nome );
	printf("Idade: %d\n", pessoa->idade);
	
	free(pessoa);
	
	printf("\n\n");
	printf("Nome: %s\n", pessoa->nome );
	printf("Idade: %d\n", pessoa->idade);
	return 0;
}
