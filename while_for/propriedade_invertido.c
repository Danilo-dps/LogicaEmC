#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int x, y, i;
	scanf("%d%d", &x, &y);
	i = x + 1;
	
	while(x >= 10 && y < 100 && i < y && i % 10 != 0){
		printf("%d\n", i);
		i++;
	}
	return 0;
}
//esse código está com erro
