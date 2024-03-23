#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){

		setlocale (LC_ALL, "Portuguese");

	float n1, n2;
	float multiplicacao, divisao, adicao, subtracao;

	scanf("%f%f", &n1, &n2);
	multiplicacao = n1*n2;
	divisao = n1/n2;
	adicao = n1+n2;
	subtracao = n1 - n2;

	printf("%f\n%f\n%f\n%f\n", multiplicacao, divisao, adicao, subtracao);

	return 0;

}

