#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

	float salary;
	char category;
	
	printf("Enter salary: US$");
	scanf("%f", &salary);
	
	printf("Enter category: ");
	scanf("%s", &category);
	
	
	switch (category) {
		case 'a' :
			salary = salary + salary * 0.10;
	    	break;
	    	
		case 'b' :
	    	salary = salary + salary * 0.15;
	    	break;
		
		case 'c' :
			salary = salary + salary * 0.20;
	    	break;
	     
	    default :
	    	printf ("Category invalid. Please, try again.");
			exit(0);
	}
	
	printf ("New salary in your category: US$%.2f", salary);
		
	return 0;
}
