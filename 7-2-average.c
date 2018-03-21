#include <stdio.h>
#include <stdlib.h>

// Faça um programa que calcule a média de 5 números inteiros dados como entrada e imprima o resultado

int main(int argc, char *argv[]) {
	int n[5];
	int i;
	int sum = 0;
	int average;

	const char *ordinals[] = {"1st", "2nd", "3rd", "4th", "5th"};
	
	for (i=0;i<5; i++) {
		printf("Enter the %s number: ", ordinals[i], i + 1);
		scanf("%d", &n[i]);
		sum = sum + n[i];	
	}
	
	average = sum / (sizeof (n) / sizeof (int));

	printf ("The avarage of the %d elements is: %d", sizeof (n) / sizeof (int), average);

	return 0;
}
