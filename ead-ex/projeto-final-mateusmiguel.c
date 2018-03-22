//******************************************************
//Instituto Federal de São Paulo - Campus Sertãozinho
//Disciplina......: M2LPBA
//Programação de Computadores e Dispositivos Móveis
//Aluno...........: Mateus Augusto Miguel
//******************************************************

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	// Suporte a caracteres especiais (usando a biblioteca locale.h)
	setlocale(LC_ALL, "Portuguese");
	
	// Declaração das variáveis
	int n[5], i, somatorio, produto = 1;
	
	// Loop que recebe os valores digitados e armazena no vetor
	while(i < 5) {
		printf("Digite um número inteiro para a posição %d: ", i);
		scanf("%d", &n[i]);
		i++;
	}
	
	// Loop que faz os cálculos com todos os valores do vetor
	for(i = 0; i < 5; i++) {
		//calcula o somatório dos valores
		somatorio = somatorio + n[i];
		// calcula o produto da multiplicação dos valores
		produto = produto * n[i];
	}
	
  	// Exibe os resultados da soma
  	printf("\nO somatório dos valores é: %d\n", somatorio);
  	
	//Condicional que checa se o somatório é positivo ou negativo
	if (somatorio != 0) {
  		if (somatorio > 0) {
			printf("O somatório é positivo. \n");
		} else {
    	printf("O somatório é negativo. \n"); 
    	}
	} else {
		printf("O somatório é nulo. \n");
  	}
  
	// Exibe os resultados da multiplicação
	printf("\nO produto dos valores é: %d\n", produto);
	
	//Condicional que checa se o produto é positivo ou negativo
 	if (produto != 0) {
		if (produto > 0) {
    		printf("O produto é positivo. \n");
    	} else {
      		printf("O produto é negativo. \n"); 
    	}
	} else {
    	printf("O produto é nulo. \n");
  	}
  	
	system("pause");
	return 0;
}
