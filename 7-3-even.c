#include <stdio.h>
#include <stdlib.h>

// Fa�a um programa que imprima todos os n�meros pares no intervalo de 1 a 100.

int main(int argc, char *argv[]) {
	int n;
	for (n=1;n<=100; n++) {
	  if(n%2 == 0){
	    printf("%d is even. \n", n);
	  }
	}
	
	return 0;
}
