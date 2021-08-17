#include <stdio.h>

int main() {
	
	int nota, aulasAssistidas;
	float frequencia;
	
	aulasAssistidas = 18;
	nota = 10;
	frequencia = aulasAssistidas/20.0;
	
	if (nota >= 6 && frequencia >= 0.75) {
		printf("Aprovado \n");
	}
	
	printf("Nota final: %d \t Frequencia: %.2f%% \n", nota, frequencia*100);
	
	return 0;
}
