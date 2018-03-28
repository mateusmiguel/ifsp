#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i, a[5], b[5], res[5];
	
	for (i = 0; i < 5; i++) {
		printf("Enter a number for array 'A' on index %d: ", i);
		scanf("%d", &a[i]);
		printf("Enter a number for array 'B'on index %d: ", i);
		scanf("%d", &b[i]);
		
		res[i] = a[i] + b[i];		
		printf("The sum of array 'a' and 'b' on index %d is: %d\n\n", i, res[i]);
	}
    return 0;
}
