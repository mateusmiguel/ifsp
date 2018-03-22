#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char *argv[]) {
	int tempMin, tempMax, i;
	float fahrenheit;
	
	printf("Minimum Temperature (°C): ");
	scanf("%d", &tempMin);
	
	printf("Maximum Temperature (°C): ");
	scanf("%d", &tempMax);
	
	for(tempMin; tempMin <= tempMax; tempMin++) {
		fahrenheit = (1.8 * tempMin) + 32;
		printf("%d Celcius =  %.2f Fahrenheit \n", tempMin, fahrenheit);
	}
	
	return 0;
}
