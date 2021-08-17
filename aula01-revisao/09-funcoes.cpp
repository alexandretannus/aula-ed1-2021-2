#include <stdio.h>

int somar(int a, int b);

int main() {
	
	int num1, num2, soma;
	
	printf("Digite valor 1: ");
	scanf("%d", &num1);
	printf("Digite valor 2: ");
	scanf("%d", &num2);
	
	soma = somar(num1, num2);
	
	printf("%d + %d = %d \n", num1, num2, soma);
	
	return 0;
}

int somar(int a, int b) {
	return a + b;
}
