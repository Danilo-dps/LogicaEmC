#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
		setlocale (LC_ALL, "Portuguese");
	int a, i;
	scanf("%d", &a);
	for(i = 1; i <= a; i++){
		printf("*\n");
	}
	  
	return 0;
}
