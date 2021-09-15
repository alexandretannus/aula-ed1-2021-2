#include <stdio.h>
#include <stdlib.h>

typedef struct product Product;

typedef struct List {
	Product *first;
	int size;
};

struct product {
  int weight;
  double price;
  Product *next;
}; 

Product* createNewProduct(int weight, double price);
List* createNewList();

bool verifyEmptyList(List *list);

void addNewItem_First(int weight, double price, List *list);

void removeItem_First(List *list);
void removeItem_Last(List *list);

void getProduct(List *list, int index);

void printList(List *list);
void printProduct(Product *product);

int getSize(List *list);


int main() {
	
	List *myList = createNewList();
	
	addNewItem_First(40, 32.21, myList);
	addNewItem_First(85, 12.21, myList);
	addNewItem_First(5, 87.41, myList);
	addNewItem_First(74, 96.21, myList);
	addNewItem_First(10, 2.21, myList);
	printList(myList);
	printf("\n Tamanho da lista: %d\n", getSize(myList));
	
	getProduct(myList, 3);
	getProduct(myList, 1);
	getProduct(myList, 5);
	
	
	getProduct(myList, 8);
	getProduct(myList, 0);
	getProduct(myList, -8);
	
	return 0;
}

Product* createNewProduct(int weight, double price) {
	Product *newProduct = (Product *) malloc(sizeof(Product));
	
	newProduct->weight = weight;
	newProduct->price = price;
	newProduct->next = NULL;
	
	return newProduct;	
}

List* createNewList() {
	List *newList = (List *) malloc(sizeof(List));
	
	newList->first = NULL;
	newList->size = 0;
	
	return newList;
}

bool verifyEmptyList(List *list) {	
	return list->first == NULL;
}

void addNewItem_First(int weight, double price, List *list) {
	// criar novo item
	Product *newProduct = createNewProduct(weight, price);
	
	// Ajustar o ponteiro PROX 
	newProduct->next = list->first;
	
	// Alterar o indicador de início da lista
	list->first = newProduct;
	
	list->size++;
}

void printProduct(Product *product) {
	printf("Weight: %d \t Price: %.2f\n", product->weight, product->price);
}

void printList(List *list) {
			
	if (verifyEmptyList(list)) {		
		printf("\n Lista Vazia \n\n");
	} else {
		printf("\n My List \n\n");
		
		Product *atual = list->first;
		
		while(atual != NULL) {
			printProduct(atual);
			atual = atual->next;
		}
	}	
}

int getSize(List *list) {
	return list->size;
}

void removeItem_First(List *list) {
	
	if (verifyEmptyList(list)) {
		printf("Lista vazia. Impossível realizar exclusão!! \n");
	} else {
		// Obter primeiro item
		Product *first = list->first;
		
		// Transformar segundo item da lista em primeiro
		list->first = first->next;
		
		// Eliminar referencias do primeiro
		first->next = NULL;
		
		// Liberar memória
		free(first);
		
		// Diminuir tamanho da lista
		list->size--;
	}	
}

void removeItem_Last(List *list) {
	
	if (verifyEmptyList(list)) {
		printf("Lista vazia. Impossível realizar exclusão!! \n");
	} else {
		// Obter primeiro item da lista		
		Product *atual = list->first;
		Product *anterior = list->first;
		
		// Percorrer toda a lista
		while (atual->next != NULL) {
			anterior = atual;
			atual = atual->next;
		}
		
		// Exclusão
		if(anterior->next == NULL) {
			list->first = NULL;			
		} 
		anterior->next = NULL;
		free(atual);		
		
		// Diminuir tamanho da lista
		list->size--;
	}
}

void getProduct(List *list, int index) {
	
	if (verifyEmptyList(list)) {
		printf("\n Lista nao contem produtos \n");
	} else if(index <= 0 || index > getSize(list)) {
		printf("\n Indice %d informado fora dos limites \n", index);
	}
	else {
		Product *product = list->first;
		int i = 1;
		
		while (i < index && product->next ) {
			product = product->next;
			i++;
		}		
	
		printProduct(product);
	}
	
}
