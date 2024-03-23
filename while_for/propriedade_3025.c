#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int a;
	scanf("%d", &a);
	
	while(a != 0 && a > 999 && a < 9999)
	{
		if((int)sqrt(a) == (double)sqrt(a))
		{
			printf("propriedade do 3025!\n");
		}
		else
		{
			printf("numero comum\n");
		}
		scanf("%d", &a);
	}
	return 0;
}
