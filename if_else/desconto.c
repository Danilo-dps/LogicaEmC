#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main(){
		setlocale(LC_ALL, "Portuguese");
	int a, b;
	
	printf("Se a idade da primeira pessoa for par, tem desconto!\n");
	printf("Insira as idades:\n");
	scanf("%d%d", &a, &b);
	
	if(a%2==0)
	{
		printf("Desconto!!!\n");
	}
	
	return 0;
}
