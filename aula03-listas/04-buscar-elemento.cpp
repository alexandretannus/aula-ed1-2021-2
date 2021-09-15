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

bool verificarListaVazia(Lista *lista);
void criarListaVazia(Lista *lista);
Elemento *criarNovoElemento(int id, char descricao[50]); 
void adicionarElementoNoFinal(Elemento *novoElemento, Lista *lista);
Elemento *buscarElemento(int id, Lista *lista);
void imprimirLista(Lista *lista);
void imprimirElemento(Elemento *elemento);

int main() {

	Lista *lista = (Lista *) malloc(sizeof(Lista)); 
	criarListaVazia(lista);
	
	Elemento *elemento1 = criarNovoElemento(1, "Computador");
	adicionarElementoNoFinal(elemento1, lista);
	Elemento *elemento2 = criarNovoElemento(2, "Teclado");
	adicionarElementoNoFinal(elemento2, lista);
	Elemento *elemento3 = criarNovoElemento(3, "Mouse");
	adicionarElementoNoFinal(elemento3, lista);
	Elemento *elemento4 = criarNovoElemento(4, "Monitor LCD");
	adicionarElementoNoFinal(elemento4, lista);
	Elemento *elemento5 = criarNovoElemento(5, "Celular");
	adicionarElementoNoFinal(elemento5, lista);
	imprimirLista(lista);
	
	Elemento *busca = buscarElemento(8, lista);
	
	if (busca == NULL) {
		printf("Elemento nao encontrado\n\n");
	} else {
		imprimirElemento(busca);
	}
	
}

bool verificarListaVazia(Lista *lista) {	
	return lista->inicioLista == NULL;
}


void criarListaVazia(Lista *lista) {
	lista->inicioLista = NULL;
}

Elemento *criarNovoElemento(int id, char descricao[50]) {
	Elemento *novo = (Elemento *) malloc(sizeof(Elemento));
	
	novo->id = id;
	strcpy(novo->descricao, descricao);
	novo->proximo = NULL;
	
	return novo;	
}

void adicionarElementoNoFinal(Elemento *novoElemento, Lista *lista) {	
	if (verificarListaVazia(lista)) {
		lista->inicioLista = novoElemento;
	} else {
		Elemento *elemento = lista->inicioLista;
		while (elemento->proximo != NULL) {
			elemento = elemento->proximo;
		}
		elemento->proximo = novoElemento;		
	}
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

Elemento *buscarElemento(int id, Lista *lista) {
	Elemento *elementoAtual = lista->inicioLista;
	
	while (elementoAtual != NULL) {
		if (elementoAtual->id == id) {
			return elementoAtual;
		}
		elementoAtual = elementoAtual->proximo;
	}
	
	return NULL;
}
