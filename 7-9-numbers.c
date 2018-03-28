#include <stdio.h>
#include <stdlib.h>

//Construa um programa capaz de ler uma s�rie de n�meros at� que apare�a um n�mero entre 1 e 5.
// Ao final, exiba a quantidade de n�meros digitados, o valor da soma dos n�meros digitados e a m�dia dos valores dos n�meros digitados.


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
