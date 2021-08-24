#include <stdio.h>

typedef struct {	
	char *nome;
	int idade;
	float nota;
} Pessoa;

void imprimirDadosAluno(Pessoa discente);
void definirDadosAluno(Pessoa *discente, char nome[], int idade, float nota );

int main() {
	
	Pessoa discente1, discente2;
	
	
	definirDadosAluno(&discente1, "Alexandre", 33, 8.5);	
	imprimirDadosAluno(discente1);
	
	definirDadosAluno(&discente2, "Joana", 25, 9.1);	
	imprimirDadosAluno(discente2);
	
	
	
	return 0;
}



void imprimirDadosAluno(Pessoa discente) {
	
	printf("\nDados do aluno\n");
	
	printf("Nome: %s\n", discente.nome);
	printf("Idade: %d\n", discente.idade);
	printf("Nota: %.1f\n", discente.nota);
}


void definirDadosAluno(Pessoa *discente, char nome[], int idade, float nota) {
	discente->nome = nome;
	discente->idade = idade;
	discente->nota = nota;
}
