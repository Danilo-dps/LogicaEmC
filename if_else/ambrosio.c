#include <stdio.h>

int main(){
	int codigo, qtde;
	float total;
	scanf("%d%d", &codigo, &qtde);
	
	if(codigo == 1)
	{
		total = 5.3 * qtde;
	}
	else if(codigo == 2)
	{
		total = 6.0 * qtde;
	}
	else if(codigo == 3)
	{
		total = 3.2 * qtde;
	}
	else if(codigo == 4)
	{
		total = 2.5 * qtde;
	}
	if(total >= 40 || qtde >= 15)
	{
		total = total - (total * 0.15);
	}
	printf("R$ %.2f\n", total);
	return 0;
}
