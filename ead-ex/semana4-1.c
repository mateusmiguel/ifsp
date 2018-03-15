#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	//Parte 1
	float valorQualquer;
	float v[10];
	int i;
	
	//Parte 2
	for (i=0;i<10; i++) {
		printf ("Entre com o elemento %i ", i + 1);
		scanf("%f", &v[i]);
	}
	
	//Parte 3
	valorQualquer = v[0];
	for (i=0; i<10;i++) {
		if (v[i] > valorQualquer) {
			valorQualquer = v[i];
		}
	}
	
	//Parte 4
	printf("\nO  valor encontrado acima eh:%.1f", valorQualquer);
	return 0;
}
