#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char nome[3][30];
	float n1[3], n2[3], n3[3], media[3]; 
	int i;
	
	for (i = 0; i <3; i++) {
		printf("\nInforme nome do aluno %d: ", i+1);
		gets(nome[i]);
		
		printf("Digite a nota %d do aluno %s: ", i+1, nome[i]);
		scanf("%f",&n1[i]);
		
		printf("Digite a nota %d do aluno %s: ", i+1, nome[i]);
		scanf("%f",&n2[i]);
		
		printf("Digite a nota %d do aluno %s: ", i+1, nome[i]);
		scanf("%f",&n3[i]); 
		
		getchar();
	}
	
	for (i = 0; i <3; i++) {	
		media[i]=(n1[i]+n2[i])+n3[i]/3;
		printf(media[i] > 60 ? "Aluno %s aprovado.\n" : "Aluno %s reprovado.\n", nome[i]);
	}

    return 0;
}
