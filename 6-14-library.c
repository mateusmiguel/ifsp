#include <stdio.h>
#include <stdlib.h>

//Precisamos fazer um programa para uma biblioteca que receba o tipo do usu�rio e a classifica��o do livro e 
//responda se o usu�rio pode ou n�o locar o livro seguindo as seguintes regras: 

//Existem dois tipos de usu�rios: o tipo �A� (aluno) e o tipo �P� (professor). 
//Existem duas classifica��es de livros: A e B. 

//Livros do tipo A podem ser locados por qualquer usu�rio enquanto livros do tipo B s� podem ser locados por professores.

int main(int argc, char *argv[]) {
	char user;
	char bookCategory;

	printf("User type ('s' for studenty or 't' for teacher): \n");
	scanf("%s", &user);
	
	printf("Book category ('a' or 'b'): ");
	scanf("%s", &bookCategory);
	
	
	if((user != 't') || (bookCategory = 'b'))  {
		printf("Denied. \n");
	} else {
		printf("Alow.\n");
	}
		
	return 0;
}
