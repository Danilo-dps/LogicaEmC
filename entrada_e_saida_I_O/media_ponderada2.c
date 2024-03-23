#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{	setlocale(LC_ALL, "Portuguese");

	double nota1, nota2, nota3;
	float media, nota11, nota22, nota33;
	
	scanf("%lf%lf%lf", &nota1, &nota2, &nota3);
	
	nota11 = nota1 * 2;
	nota22 = nota2 * 3;
	nota33 = nota3 * 5;
	
	media = (nota11 + nota22 + nota33) / 10;
	
	printf("MEDIA = %.1f\n", media);
	return 0;
}
