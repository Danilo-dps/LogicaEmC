#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h> 

int main(){
		setlocale(LC_ALL, "Portuguese");
		
	float conta_cliente, taxa_garcom, valor_final;
	
	scanf("%f", &conta_cliente);
	
	taxa_garcom = conta_cliente / 10;
	valor_final = taxa_garcom + conta_cliente;
	
	printf("Valor final é: %.2f\n", valor_final);
	
	return 0;
}
