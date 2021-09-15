#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct elemento Elemento;
typedef struct Lista {
	Elemento *inicioLista;
	int tamanhoLista;
};

struct elemento {
	int id;
	char descricao[50];
	Elemento *proximo;
} ;

bool verificarListaVazia(Lista *lista);
void criarListaVazia(Lista *lista);
Elemento *criarNovoElemento(int id, char descricao[50]); 
void adicionaElementoNoInicio(Elemento *novoElemento, Lista *lista);
void removerElementoMeio(Lista *lista, int posicao);
void imprimirLista(Lista *lista);
void imprimirElemento(Elemento *elemento);
int obtertamanhoLista(Lista *lista);

int main() {

	Lista *lista = (Lista *) malloc(sizeof(Lista)); 
	criarListaVazia(lista);
	imprimirLista(lista);
	
	Elemento *elemento1 = criarNovoElemento(1, "Computador");
	adicionaElementoNoInicio(elemento1, lista);
	imprimirLista(lista);
	system("PAUSE");
	
	Elemento *elemento2 = criarNovoElemento(2, "Teclado");
	adicionaElementoNoInicio(elemento2, lista);
	imprimirLista(lista);
	system("PAUSE");
	
	removerElementoFinal(lista);
	imprimirLista(lista);
	system("PAUSE");
	removerElementoFinal(lista);
	imprimirLista(lista);
	
		
}

bool verificarListaVazia(Lista *lista) {	
	return lista->inicioLista == NULL;
}


void criarListaVazia(Lista *lista) {
	lista->inicioLista = NULL;
	lista->tamanhoLista = 0;
}

Elemento *criarNovoElemento(int id, char descricao[50]) {
	Elemento *novo = (Elemento *) malloc(sizeof(Elemento));
	
	novo->id = id;
	strcpy(novo->descricao, descricao);
	novo->proximo = NULL;
	
	return novo;	
}

void adicionaElementoNoInicio(Elemento *novoElemento, Lista *lista) {	
	if (verificarListaVazia(lista)) {
		lista->inicioLista = novoElemento;
	} else {
		novoElemento->proximo = lista->inicioLista;
		lista->inicioLista = novoElemento;
	}
	lista->tamanhoLista++;
}

void removerElementoFinal(Lista *lista) {
	
	Elemento *elementoAtual = lista->inicioLista;
	
	if (elementoAtual->proximo == NULL) {
		printf("Removendo primeiro elemento... \n\n");
		lista->inicioLista = NULL;
	} else {	
		printf("Removendo elemento... \n\n");
		Elemento *elementoAnterior = lista->inicioLista;	
		while (elementoAtual->proximo != NULL) {
			elementoAnterior = elementoAtual;
			elementoAtual = elementoAtual->proximo;
		} 		
		elementoAnterior->proximo = NULL;				
	}
	
	free(elementoAtual);
}

void imprimirLista(Lista *lista) {
	system("cls");
	if (verificarListaVazia(lista)) {
		printf("Lista vazia \n");
	} else {
		Elemento *elementoAtual = lista->inicioLista;
		while (elementoAtual != NULL) {
			imprimirElemento(elementoAtual);
			elementoAtual = elementoAtual->proximo;
		} 
	}
}

void imprimirElemento(Elemento *elemento) {	
	printf("ID: %d\n", elemento->id );
	printf("Nome: %s\n", elemento->descricao);
	printf("\n------\n\n");
}
