#include <stdio.h>

int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	
	while(n <= m){
		if(n % 5 == 0){
			printf("%d", n);
			printf("|");
		}
		n++;
	}
	
}
//erro de apresentação 
