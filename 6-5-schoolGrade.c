#include <stdio.h>
#include <stdlib.h> 

// Desenvolva um programa que leia a matrícula e a nota final de um aluno de uma escola.
// Se a nota final for maior ou igual a 60, o programa deve exibir a mensagem “Aluno aprovado”.
// Como complemento ao exercício 6.1, o programa deverá exibir também a mensagem “Aluno reprovado”, caso a nota final do aluno seja menor que 60.

int main(int argc, char *argv[]) {
	int grade; 
	printf("Enter the final grade: ");
	scanf("%d", &grade);
	
	if(grade >= 60) {
		printf("Student approved. \n");
	} else {
		printf("Student reproved. \n");
	}
	
	system("pause");
	
	return 0;
}
