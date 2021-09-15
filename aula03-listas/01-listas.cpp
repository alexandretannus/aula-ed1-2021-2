#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct elemento Elemento;
typedef struct Lista {
	Elemento *inicioLista;
};

struct elemento {
	int id;
	char descricao[50];
	Elemento *proximo;
} ;

bool verificarListaVazia(Lista *inicioLista);
void criarListaVazia(Lista *lista);
Elemento *criarNovoElemento(int id, char descricao[50]); 
void adicionaElementoNoInicio(Elemento *novoElemento, Elemento *inicioLista);

int main() {

	Lista *lista; 
	criarListaVazia();
	printf("%d\n\n", verificarListaVazia(lista));
	
	Elemento *elemento1 = criarNovoElemento(1, "Computador");
	//adicionaElementoNoInicio(elemento1, lista);
	printf("%d", verificarListaVazia(lista));
	
		
}

bool verificarListaVazia(Lista *inicioLista) {
	return inicioLista.inicioLista == NULL;
}

void criarListaVazia(Elemento *inicio) {
	inicio = NULL;
}

void criarListaVazia(Lista *lista) {
	lista.inicioLista = NULL
}
/*
Elemento* criarListaVazia() {
	Elemento *lista; 
	lista = (Elemento *) malloc(sizeof(lista));
	return NULL;
	
}
*/
Elemento *criarNovoElemento(int id, char descricao[50]) {
	Elemento *novo = (Elemento *) malloc(sizeof(Elemento));
	
	novo->id = id;
	strcpy(novo->descricao, descricao);
	novo->proximo = NULL;
	
	return novo;	
}

void adicionaElementoNoInicio(Elemento *novoElemento, Elemento *inicioLista) {
	
	if (inicioLista == NULL) {
		printf("Inserindo no inicio de lista vazia\n");
		inicioLista = novoElemento;
	} else {
		printf("Inserindo no inicio de lista não vazia\n");
		novoElemento->proximo = inicioLista;
		inicioLista = novoElemento;
	}
}
