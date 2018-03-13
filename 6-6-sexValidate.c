#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
	char sex;
	
	printf("\nWhat's your sex? \n");
	scanf(" %s", &sex);

	
	if (sex =='m' || sex == 'M' || sex == 'w' || sex =='W') {
		printf("Sex validate. \n");
	} else {
		printf("Invalid sex. \n");
	}
	
	return 0;
}
