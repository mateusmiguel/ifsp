#include <stdio.h>
#include <stdlib.h>

//Construa um programa capaz de ler uma série de números até que apareça um número entre 1 e 5.
// Ao final, exiba a quantidade de números digitados, o valor da soma dos números digitados e a média dos valores dos números digitados.


int main(int argc, char *argv[]) {
	int count, n, sum = 0;
	float average;
	
	do {
		printf("Enter a number: ");
		scanf("%d", &n);
		sum += n;
		count++;
	} while(n < 1 || n > 5);
	
	average = sum / count;	
	
	printf("\nYou enter %d numbers\n", count);
	printf("The sum of numbers is %d\n", sum);
	printf("The average of numbers is %.1f\n", average);
	
    return 0;
}
