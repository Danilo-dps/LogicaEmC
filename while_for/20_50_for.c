#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
		setlocale (LC_ALL, "Portuguese");
	int a;
	for(a = 20; a <= 50; a++){
		printf("%d\n", a);
	}
	return 0;
}
