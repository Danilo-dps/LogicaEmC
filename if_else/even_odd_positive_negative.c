#include <stdio.h>
#define tam 5

int main(){
	
	int i, v[tam], a = 0, b, c, d;
	
	for(i = 0; i < 5; i++){
		scanf("%d", &v[i]);
		if(v[i] % 2 == 0){
			a++;
		}
		if(v[i] % 2 != 0){
			b++;
		}
		if(v[i] > 0){
			c++;
		}
		if(v[i] < 0){
			d++;
		}
	}
	printf("%d valor(es) par(es)\n", a);
	printf("%d valor(es) impar(es)\n", b);
	printf("%d valor(es) positivos(s)\n", c);
	printf("%d valor(es) negativos(s)\n", d);
}
