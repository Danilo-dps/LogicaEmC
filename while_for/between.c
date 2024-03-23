#include <stdio.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int i = a + 1;
	while(i < b){
		printf("%d\n", i);
		i++;
	}
}
