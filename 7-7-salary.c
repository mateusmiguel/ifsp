#include <stdio.h>
#include <stdlib.h>

//Fa�a um programa que leia os valores dos sal�rios atuais dos funcion�rios de uma empresa e imprima os valores com aumento.
//Se o sal�rio for menor ou igual a R$ 500,00, o programa deve aplicar um aumento de 0.10 (10%) e se for maior que R$ 500,00, o aumento deve ser de 0.08 (8%).

//Assim como no nosso �ltimo exemplo, o usu�rio � que deve informar quando deseja sair.
//Ou seja, ele deve digitar o sal�rio de um funcion�rio e o programa vai exibir o valor com o aumento.
// Depois ele deve responder se deseja digitar outro sal�rio ou n�o. Se ele responder que sim, deve-se solicitar o novo sal�rio e exibir o valor com aumento.
//Ent�o, torna-se a perguntar se ele deseja informar um novo sal�rio e repetir o la�o at� que ele n�o queira informar novos sal�rios.

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
