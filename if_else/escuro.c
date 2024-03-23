#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main(){
		setlocale(LC_ALL, "Portuguese");
	int a;
	
	printf("Insira um horário:\n");
	scanf("%d", &a);
	
	if(a >= 18 || a <= 5)
	{
		printf("Escuro.\n");
	}
	
	return 0;
}
