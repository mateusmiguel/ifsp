#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	float salarioBruto, salarioLiquido, ir, inss, descontos;
	
	printf("Digite o salário bruto: R$");
	scanf("%f", &salarioBruto);
	
	if (salarioBruto <= 1500) {
		ir = 0.0;
		inss = 0.05;		
	} else {
		ir = 0.05;
		inss = 0.11;
	}
	
	descontos = (salarioBruto * ir) + (salarioBruto * inss);
	salarioLiquido = salarioBruto - descontos;
	
	printf("\nSalário Líquido: R$%.2f \n", salarioLiquido);
	printf("\nDesconto IR: (%.2f%%) \n", ir);
	printf("\Desconto INSS: (%.2f%%) \n", inss);
	printf("Valor total dos descontos: R$%.2f \n", descontos);
		
	return 0;
}
