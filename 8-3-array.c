#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i, n[10];

	void checkMultiple(int multiple){
		printf("\nNumbers multiples by %d:\n", multiple);
		for (i = 0; i < 10; i++) {
			if(n[i] % multiple == 0) {
				printf("%d (on index %d)\n", n[i], i);
			}
		}
	}

	for (i = 0; i < 10; i++) {
		printf("Enter a number for index %d: ", i);
		scanf("%d", &n[i]);
	}
	
	checkMultiple(2);
	checkMultiple(3);
	checkMultiple(5);
	
    return 0;
}
