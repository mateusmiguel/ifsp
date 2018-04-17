#include <stdio.h>
#include <stdlib.h>

int fib(int num){
	if(num == 0 || num == 1){
		return num;
	}
	return fib(num - 1) + fib(num - 2);
}

int main(int argc, char *argv[]) {
	int n, i, factorial , fac;
	
	printf("Enter a interger number: ");
	scanf("%d", &n);
	
	fac = fib(n);
	printf("Fact: %d", n);
}
