#include <stdio.h>

int main(){
	int x, y;
	scanf("%d%d", &x, &y);
	
	if(x > 0 && y > 0){
		printf("primeiro");
	}
	else if(x < 0 && y > 0){
		printf("segundo");
	}
	else if(x < 0 && y < 0){
		printf("terceiro");
	}
	else if(x > 0 && y < 0){
		printf("quarto");
	}
	else if(x != 0 && y == 0){
		printf("eixo x");
	}
	else if(x == 0 && y != 0){
		printf("eixo y");
	}
	else{
		printf("origem");
	}
	return 0;
}
