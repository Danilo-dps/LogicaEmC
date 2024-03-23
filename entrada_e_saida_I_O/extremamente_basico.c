#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h> 

int main()
{
		setlocale(LC_ALL, "portuguese");
	int a, b, x;
	
	scanf("%d%d", &a, &b);
	
	x = a + b;
	
	printf("X = %d", x);
	
	return 0;
	 
}
