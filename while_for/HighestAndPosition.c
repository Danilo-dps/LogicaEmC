#include <stdio.h>
 
int main() {
 
	int a[100];
	int i;
	int maior = 0;
	int pos = 0;
	
	for(i = 0; i < 100; i++){
		scanf("%d", &a[i]);
		if(a[i] > maior){
			maior = a[i];
			pos = i;
		}
	}
	printf("%d\n", maior);
	printf("%d", pos + 1);

 
    return 0;
}

