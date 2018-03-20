#include <stdio.h>
#include <stdlib.h>

//Faça um programa que leia cinco valores reais e imprima o quadrado de cada um deles. Ao fim, imprima também o somatório dos cinco.

int main(int argc, char *argv[]) {
	float v[5];
	float sum = 0;
	int i;
	const char *ordinals[] = {"1st", "2nd", "3rd", "4th", "5th"};
	
	for (i=0;i<5; i++) {
	  printf("Enter the %s number: ", ordinals[i], i + 1);
		scanf("%f", &v[i]);
		sum = sum + v[i];	
	  v[i] = v[i]*v[i];
		printf("The square of the number is %.1f \n", v[i]);
		
	}
	
	printf("The sum of the five numbers is: %.2f \n", sum);

	return 0;
}
