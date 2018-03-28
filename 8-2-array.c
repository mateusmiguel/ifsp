#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i;
	float n[5];
	
	for (i = 0; i < 5; i++) {
		printf("Enter a number for array 'A' on index %d: ", i);
		scanf("%f", &n[i]);
	}
	
	i = 0;
	
 	while(i < 5) {
		printf("Enter the index you want to see: ");
		scanf("%d", &i);
		if (i < 5) {
			printf("The value of index %d is %f", i, n[i]);
		}
	}
	
	printf("bye");
	
    return 0;
}
