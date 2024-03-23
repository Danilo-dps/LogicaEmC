#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
	int entrada, antecessor, sucessor;
	
    scanf("%d", &entrada);
	antecessor = entrada - 1;
	sucessor = entrada + 1;
	
	printf("%d %d", antecessor, sucessor);

	return 0;
	
}
