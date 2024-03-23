#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
	//14/03/2023, esse código de erro no site The huxley, ainda nõo sei pq
		setlocale(LC_ALL, "Portuguese");
	
	float area, raio, raiom, pi;
	
	scanf("%f", &raio);
	
	pi = 3.14159;
	raiom = raio / 100;
	area = pi * (raiom * raiom);
	
	printf("Area = %.4f m²\n", area);
	
	return 0;
	
}
