#include <stdio.h>
#include <stdlib.h>

int main()
{
   float a, b, resDivisao;
   a = 11;
   printf("\nDigite um numero para dividirmos por 11: ");
   scanf("%f", &b);
   
   resDivisao = a/b;
   
   printf("\nO resultado dessa divisao eh: %f \n", resDivisao);
   system("PAUSE");
   return 0;
}