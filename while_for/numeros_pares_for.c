#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
		setlocale (LC_ALL, "Portuguese");
	int a, b;
	scanf("%d%d", &a, &b);
	printf("\n");
	for(; a <= b; a++){
		if(a % 2 == 0){
			printf("%d\n", a);
		}
	}
	return 0;
}
//
