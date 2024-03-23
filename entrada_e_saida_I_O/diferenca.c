#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main(){
		setlocale(LC_ALL, "Portuguese");
	
	int a, b, c, d, produto1, produto2, diferenca;
	
	scanf("%d%d%d%d", &a, &b, &c, &d);
	
	produto1 = a * b;
	produto2 = c * d;
	diferenca = produto1 - produto2;
	
	printf("DIFERENCA = %d\n", diferenca);
	
	return 0;
}
