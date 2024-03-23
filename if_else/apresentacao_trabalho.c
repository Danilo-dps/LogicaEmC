#include <stdio.h>

int main(){
	int a, b, c, d, e;
	int count = 0;
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
	if(a == 1 || b == 1){
		count++;
	}
	if(c == 1 && d == 1 && e == 1){
		count++;
	}
		if(count >= 2){
			printf("AVALIADO\n");
		}
		else{
			printf("%d\n", 0);
		}
	return 0;
}
