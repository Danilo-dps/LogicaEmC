#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main(){
		setlocale(LC_ALL, "Portuguese");
		
	int idade;
	
	printf("Insira uma idade:\n");
	scanf("%d", &idade);
	
	if(idade >= 18){
		printf("Maior de idade.\n");
	}
		if(idade % 2 == 0){
			printf("O número é par.\n");
		}
			if(idade % 2 >= 1){
				printf("O número é ímpar.\n");
			}
				if(idade < 18){
					printf("Menor de idade.\n");
				}
			
	return 0;
}
