#include <stdio.h>
#include <locale.h>

int main(){
		setlocale (LC_ALL, "Portuguese");
	int a, b, c, idade;
	
	printf("Digite a idade:");
	scanf("%d", &idade);
	
	if(idade < 16)
	{
		printf("Não eleitor\n");
	}
	else if(idade >= 18 && idade < 65)
	{
		printf("Eleitor obrigatório\n");
	}
	else
	{
		printf("Eleitor facultativo\n");	
	}
	return 0;
}
