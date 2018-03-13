#include <stdio.h>
#include <stdlib.h> 

int main(int argc, char *argv[]) {
	int n; 
	printf("Enter a number: ");
	scanf("%d", &n);
	
	if(n >= 20 && n <= 90) {
		printf("The number is between 20 and 90. \n");
	}
	
	system("pause");
	
	return 0;
}
