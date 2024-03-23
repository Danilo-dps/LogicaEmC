#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>

int main(){
		setlocale(LC_ALL, "Portuguese");
	int a, b;
	scanf("%d%d", &a, &b);
	if (a%2==0 && b%2==0)
	{
		printf("Desconto\n");
	}
	
	return 0;
}
