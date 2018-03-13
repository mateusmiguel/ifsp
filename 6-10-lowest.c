#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int v1, v2, v3;
	
	printf("Enter the first number: ");
	scanf(" %d", &v1);
	
	printf("Enter the second number: ");
	scanf(" %d", &v2);
	
	printf("Enter the third number: ");
	scanf(" %d", &v3);
	
	if (v1 < v2  && v1 < v3) {
		printf("Smallest number is %d \n", v1);
	} else if (v2 < v1  && v2 < v3) {
		printf("Smallest number is %d \n", v2);
	} else {
		printf("Smallest number is %d \n", v3);
	}
	
	return 0;
}
