#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n, i, factorial	;
	
	printf("Enter a interger number: ");
	scanf("%d", &n);
	
	if (n < 0) {
    	printf("Error! Factorial of a negative number doesn't exist.");
	} else {
    	for(i=1; i<=n; ++i) {
        	factorial *= i;
		}
        printf("Factorial of %d = %llu", n, factorial);
    }

    return 0;
}
