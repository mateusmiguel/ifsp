#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	int i, n;
	int vet[5];
	
	printf ("Insira os valores no vetor:  \n");
	for (i=0; i<5; i++) {
		scanf("%d", &vet[i]);
	}
	
	printf ("Impressao do Resultado:  \n");
	for (i=5-1; i>=0; i--) {
		printf("%d", &vet[i]);
	}
	system("pause");
	return 0;
}
