#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main(){
		setlocale(LC_ALL, "Portuguese");
	int a, b;
	
	printf("Desconto para o casal que tiver uma das idades ímpares:\n");
	printf("Insira as idades:\n");
	
	scanf("%d%d", &a, &b);
	
	if(a % 2 == 1 || b % 2 == 1)
	{
		printf("Desconto!!!\n");
	}
	
	return 0;
}
