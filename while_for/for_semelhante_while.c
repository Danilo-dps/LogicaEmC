#include <stdio.h>
#include <locale.h>

int main(){
		setlocale (LC_ALL, "Portuguese");
		int n, contador;
		scanf("%d", &n);
		
		for(contador = 0; contador < n; contador++){
			printf("Eu adoro programar\n");
		}
		return 0;
}
