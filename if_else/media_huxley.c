#include <stdio.h>

int main(){
	int a, b, c, media;
	scanf("%d%d%d", &a, &b, &c);
	
	media = (a + b + c)/3;
	
	if(media >= 7){
		printf("aprovado");
	}
	else if(media < 3){
		printf("reprovado");
	}
	else{
		printf("prova final");
	}
	return 0;
}
