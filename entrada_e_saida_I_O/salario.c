#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
	  setlocale(LC_ALL, "Portuguese"); 
	  
	int nf, nh;
	float vh, salario;
	
	scanf("%d%d%f", &nf, &nh, &vh);
	
	salario = nh * vh;
	
	printf("NUMBER = %d\n", nf);
	printf("SALARY = R$ %.2f\n", salario);
	
	return 0;
	 
}
