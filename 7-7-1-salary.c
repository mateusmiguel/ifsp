#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float salary, newSalary;
	char exit;
	
	do {
		//get values
		printf("Enter the salary: U$");
		scanf("%f", &salary);
		
		//calcs
		if (salary <= 500.00) {
			newSalary = salary + salary*0.10;
		} else {
			newSalary = salary + salary*0.08;
		}
		
		//show result		
		printf("Salary is %.2f\n", newSalary);
		
		//condition to continue
		printf ("\nDo you want to continue? Press any key for continue or 'n' to exit.\n");
		fflush(stdin);
		exit = getchar();
//		getchar();
	} while(exit != 'n' && exit != 'N');	
	
    return 0;
}
