#include <stdio.h>

int main(){
	long int n;
	scanf("%li", &n);
	
	if(n > 0 && n % 2 == 0)
	{
		printf("POSITIVO PAR\n");
	}
	if(n > 0 && n % 2 != 0)
	{
		printf("POSITIVO IMPAR\n");
	}
	if(n < 0 && n % 2 == 0)
	{
		printf("NEGATIVO PAR\n");
	}
	if(n < 0 && n % 2 != 0)
	{
		printf("NEGATIVO IMPAR\n");
	}
	else if(n == 0)
	{
		printf("NULO\n");
	}
	return 0;
}
