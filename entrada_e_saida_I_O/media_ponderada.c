#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{	setlocale(LC_ALL, "Portuguese");

	double nota1, nota2;
	float media, nota11, nota22;
	
	scanf("%lf%lf", &nota1, &nota2);
	
	nota11 = nota1 * 3.5;
	nota22 = nota2 * 7.5;
	
	media = (nota11 + nota22) / 11;
	
	printf("MEDIA = %.5f\n", media);
	return 0;
}
