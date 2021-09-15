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
void adicionarElementoNoMeio(Elemento *novoElemento, Lista *lista, int index);
void imprimirLista(Lista *lista);
void imprimirElemento(Elemento *elemento);

int main() {

	Lista *lista = (Lista *) malloc(sizeof(Lista)); 
	criarListaVazia(lista);
	imprimirLista(lista);
	system("PAUSE");
	
	Elemento *elemento1 = criarNovoElemento(1, "Computador");
	adicionarElementoNoMeio(elemento1, lista, 1);
	imprimirLista(lista);
	system("PAUSE");
	Elemento *elemento2 = criarNovoElemento(2, "Teclado");
	adicionarElementoNoMeio(elemento2, lista, 0);
	imprimirLista(lista);
	system("PAUSE");
	
	Elemento *elemento3 = criarNovoElemento(3, "Mouse");
	adicionarElementoNoMeio(elemento3, lista, 1);
	imprimirLista(lista);
	
	Elemento *elemento4 = criarNovoElemento(4, "Tela");
	adicionarElementoNoMeio(elemento4, lista, 5);
	imprimirLista(lista);
	
		
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

void adicionarElementoNoMeio(Elemento *novoElemento, Lista *lista, int index) {	
	if (verificarListaVazia(lista) || index == 0) {
		novoElemento->proximo = lista->inicioLista;
		lista->inicioLista = novoElemento;
	} else {
		Elemento *elemento = lista->inicioLista;
		int cont = 1;
		while (cont < index && elemento->proximo != NULL) {
			printf("cont: %d \t index: %d\n", cont, index);
			elemento = elemento->proximo;
			cont++;
		}
		novoElemento->proximo = elemento->proximo;
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
