#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	float notas[10];
	int i;
	
	printf("Lendo as notas:\n");
	for (i = 0; i < 10; i++) {
		printf("Digite a nota do próximo aluno: ");
		scanf("%f", &notas[i]);
	}
	printf("\nExibindo as notas digitadas:\n");
	for (i = 0; i < 10; i++) {
		printf("A nota %.2f foi armazenada no índice %d do vetor.\n", notas[i], i);
	}
	
}
