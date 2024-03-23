#include <stdio.h>

int main(){
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if(a != b && a != c){
		printf("\nA\n");
	}
	else if(b != a && b != c){
		printf("\nB\n");
	}
	else if(c != a && c != b){
		printf("\nC\n");
	}
	else{
		printf("\n*\n");
	}
	return 0;
}
