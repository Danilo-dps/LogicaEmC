#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>

int main (){
		setlocale(LC_ALL, "Portuguese");
	int resto, x, eh_par;
	
	scanf ("%d", &x);
	resto = (x%2);
	eh_par = (resto == 0);
	
	if (! eh_par)
	{
		printf("ímpar\n");
	}
	
	return 0;
}
