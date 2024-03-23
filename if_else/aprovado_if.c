#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

int main(){
		setlocale(LC_ALL, "Portuguese");
	int nota1;
	
	printf("Para ser aprovado a nota tem que ser maior ou igual a 7.\n");
	printf("Digite a nota:\n");
	scanf("%d", &nota1);
	
	if(nota1 >= 7){
		printf("Aprovado!\n");
	}
		if(nota1 < 7){
			printf("Reprovado!\n");
		}
	return 0;
}
