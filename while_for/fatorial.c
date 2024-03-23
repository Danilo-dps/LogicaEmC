#include <stdio.h>

int main(){
	int a, b, i;
	scanf("%d", &a);
	i = 1;
	
	while(i <= a){
		b = a * i;
		i++;
	}
	printf("%d", b);
}
//esse código está com erro
