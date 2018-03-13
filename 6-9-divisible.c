#include <stdio.h>
#include <stdlib.h> 

// Construa um programa que leia um número inteiro e imprima a informação se este número é ou não divisível por 5.
// Dica: Utilize o operador % (resto de divisão inteira).

int main(int argc, char *argv[]) {
	int n; 
	printf("Enter a number: ");
	scanf("%d", &n);
	
	if (n % 5 == 0) {
		printf("%d is divisble by five. \n", n);
	} else {
		printf("%d not is divisble by five. \n", n);
	}
	
	system("pause");
	
	return 0;
}
