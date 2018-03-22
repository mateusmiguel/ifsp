//******************************************************
//Instituto Federal de S�o Paulo - Campus Sert�ozinho
//Disciplina......: M2LPBA
//Programa��o de Computadores e Dispositivos M�veis
//Aluno...........: Mateus Augusto Miguel
//******************************************************

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	// Suporte a caracteres especiais (usando a biblioteca locale.h)
	setlocale(LC_ALL, "Portuguese");
	
	// Declara��o das vari�veis
	int n[5], i, somatorio, produto = 1;
	
	// Loop que recebe os valores digitados e armazena no vetor
	while(i < 5) {
		printf("Digite um n�mero inteiro para a posi��o %d: ", i);
		scanf("%d", &n[i]);
		i++;
	}
	
	// Loop que faz os c�lculos com todos os valores do vetor
	for(i = 0; i < 5; i++) {
		//calcula o somat�rio dos valores
		somatorio = somatorio + n[i];
		// calcula o produto da multiplica��o dos valores
		produto = produto * n[i];
	}
	
  	// Exibe os resultados da soma
  	printf("\nO somat�rio dos valores �: %d\n", somatorio);
  	
	//Condicional que checa se o somat�rio � positivo ou negativo
	if (somatorio != 0) {
  		if (somatorio > 0) {
			printf("O somat�rio � positivo. \n");
		} else {
    	printf("O somat�rio � negativo. \n"); 
    	}
	} else {
		printf("O somat�rio � nulo. \n");
  	}
  
	// Exibe os resultados da multiplica��o
	printf("\nO produto dos valores �: %d\n", produto);
	
	//Condicional que checa se o produto � positivo ou negativo
 	if (produto != 0) {
		if (produto > 0) {
    		printf("O produto � positivo. \n");
    	} else {
      		printf("O produto � negativo. \n"); 
    	}
	} else {
    	printf("O produto � nulo. \n");
  	}
  	
	system("pause");
	return 0;
}
