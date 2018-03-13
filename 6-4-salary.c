#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float salary;
	
	printf("Enter your current salary: US$ ");
	scanf(" %f", &salary);
	
	if (salary <= 500.00) {		
		salary = salary + salary * 0.10;
		printf("The new salary now is US$ %.2f",salary );
	}
	
	return 0;
}
