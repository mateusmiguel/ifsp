#include <stdio.h>
#include <stdlib.h>

//Faça um programa que fique em um laço solicitando a digitação de números inteiros e só pare de solicitar a
//digitação de novos números quando o usuário informar o número 0. Quando o número 0 for informado, o programa deve exibir a 
//quantidade de números digitados, a quantidade de números pares, a quantidade de números ímpares e a média 
//dos valores dos números digitados.

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
