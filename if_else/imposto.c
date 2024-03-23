#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main(){
		setlocale(LC_ALL, "Portuguese");
	float compras, imposto;

	printf("O valor excedido a $ 500,00, pagará imposto de 50.\n");
	printf("Insira o valor da sua compra:\n");
	scanf("%f", &compras);
	
	imposto = (compras - 500) / 2;
	if(compras <= 500)
	{
		printf("Isento.\n");
	}
		if(compras > 500)
		{
			printf("Valor do imposto é de $ %.2f", imposto);	
		}
		
	return 0;
	
}
