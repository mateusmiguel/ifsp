#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int soma = 0;
	int v[10];
	int i;
	
	for (i=0;i<10; i++) {
		printf ("Entre com o elemento %i do vetor", i + 1);
		scanf("%d", &v[i]);
	}
	
	for (i=0; i<10; i++) {
		soma = soma + v[i];	
	}
	
	printf("\nO valor da soma eh:%d", soma);
	return 0;
}
