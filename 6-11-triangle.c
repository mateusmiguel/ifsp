#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a, b, c;
	int valid = 0;
	
	printf ("Enter with the first side: \n");
	scanf("%d", &a);
	
	printf ("Enter with the second side: \n");
	scanf("%d", &b);
	
	printf ("Enter with the third side: \n");
	scanf("%d", &c);
	
	if ((a + b) > c) {
		if ((a + c) > b) {
			if ((b + c) > a) {
				valid = 1;
			}
		}
	}
	
	if (valid == 1) {
		printf ("The triangle is valid. \n");
	} else {
		printf ("The triangle is not valid. \n");
	}
	
	return 0;
}
