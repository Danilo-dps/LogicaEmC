#include <stdio.h>
#include <locale.h>

int main(){
		setlocale (LC_ALL, "Portuguese");
	int n, divisor;
	scanf("%d", &n);
	divisor = 2;
	
	while(n != 0)
	{
		  if(n % divisor == 0)
		  {
			printf("Primo\n");
		  }
		  else
		  {
			printf("Não é primo\n");
		  }
	}
	return 0;
}
//esse código está com erro
