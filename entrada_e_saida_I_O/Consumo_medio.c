#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){

		setlocale (LC_ALL, "Portuguese");

	float distancia, consumo_total, consumo_medio;

	scanf("%f%f", &distancia, &consumo_total);

	consumo_medio = distancia / consumo_total;

	printf("%.3f km/l\n", consumo_medio);

	return 0;

}
