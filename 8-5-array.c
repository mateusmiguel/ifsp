#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n[10];
	int i, sum, average, highest, lowest;
	
	for(i = 0; i < 10; i++) {
		printf("Enter a number: ");
		scanf("%d", &n[i]);
	}
	
	lowest = n[0];
	
	printf("/n");
	for(i = 0; i < 10; i++) {
		sum += n[i];
		printf("Number %d: %d\n", i+1, n[i]);
		
		if (n[i] > highest) {
			highest = n[i];
		}	
		        
		if (n[i] < lowest) {
			lowest = n[i];
		}
	}

	average = sum/10;
	
	printf("The highest number is: %d\n", highest);
	printf("The lowest number is: %d\n", lowest);
	
	return 0;
}
