#include <stdio.h>
#include <stdlib.h>

//Fa�a um programa que fique em um la�o solicitando a digita��o de n�meros inteiros e s� pare de solicitar a
//digita��o de novos n�meros quando o usu�rio informar o n�mero 0. Quando o n�mero 0 for informado, o programa deve exibir a 
//quantidade de n�meros digitados, a quantidade de n�meros pares, a quantidade de n�meros �mpares e a m�dia 
//dos valores dos n�meros digitados.

int main(int argc, char *argv[]) {
	//init variables
	int count, n, even = 0, odd = 0, sum = 0;
	float average;
	
	while(n != 0) {
		printf("Enter a number: ");
		scanf("%d", &n);
		sum += n;
		if(n != 0) {
			if(n%2 == 0){
	    		even++;
	    	} else {
	    		odd++;	
			}
			ccount++
		};
	}
	
	average = sum / count;	
	
	printf("\nYou enter %d numbers (without 0)\n", count);
	printf("The sum of numbers is %d\n", sum);
	printf("%d numbers are odd\n", odd);
	printf("%d numbers are even\n", even);
	printf("The average of numbers is %.1f\n", average);
	
    return 0;
}
