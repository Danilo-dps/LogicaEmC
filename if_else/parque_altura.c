#include <stdio.h>

int main(){
	int f, i, count;
	scanf("%d%d", &f, &i);
	
	if(f >= 150 && i >= 12){
		count++;
	}
	if(f >= 140 && i >= 14){
		count++;
	}
	if(f >= 170 || i >= 16){
		count++;
	}
	printf("\n%d\n", count);
	return 0;
}
