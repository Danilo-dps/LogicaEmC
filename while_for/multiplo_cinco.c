#include <stdio.h>

int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	
	while(n <= m){
	if(n % 5 == 0 && n != m && m >= 10){
			printf("%d", n);
			printf("|");
		}
	else if(n % 5 == 0){
		printf("%d", n);
	}
		n++;
	}	
}
//erro de apresentação corrigido, programa de acordo com os testes de submissão
