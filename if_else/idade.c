#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{		setlocale(LC_ALL, "Portuguese");

	int idade;
	printf("Digite sua idade:\n");
	scanf("%d", &idade);
	
	if(idade >= 18){
		printf("Maior de idade.\n");
	}
	return 0;
}
