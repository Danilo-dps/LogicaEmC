#include <stdio.h>

int main(){
	int i, count, a, b, c;
	
	scanf("%d%d%d", &a, &b, &c);
	if(a == b && a == c){
		printf("equilatero\n");
	}
	else if(a == b && a!= c || b == c && b!= a || a == c && b != c){
		printf("isosceles");
	}
	else{
		printf("escaleno");
	}
	return 0;
}
