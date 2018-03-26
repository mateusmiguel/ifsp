#include <stdio.h>
#include <stdlib.h>

//Faça um programa que leia os valores dos salários atuais dos funcionários de uma empresa e imprima os valores com aumento.
//Se o salário for menor ou igual a R$ 500,00, o programa deve aplicar um aumento de 0.10 (10%) e se for maior que R$ 500,00, o aumento deve ser de 0.08 (8%).

//Assim como no nosso último exemplo, o usuário é que deve informar quando deseja sair.
//Ou seja, ele deve digitar o salário de um funcionário e o programa vai exibir o valor com o aumento.
// Depois ele deve responder se deseja digitar outro salário ou não. Se ele responder que sim, deve-se solicitar o novo salário e exibir o valor com aumento.
//Então, torna-se a perguntar se ele deseja informar um novo salário e repetir o laço até que ele não queira informar novos salários.

int main(int argc, char *argv[]) {
	float salary;
	char exit = ' ';
	
	while(exit != 'n' && exit != 'N') {
		//calcs
		
		//condition to continue
		printf ("Do you want to continue? Press any key for continue or 'n' to exit. ");
		exit = getchar();
		getchar();
	}	
	
    return 0;
}
