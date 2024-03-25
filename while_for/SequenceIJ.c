#include <stdio.h>
 
int main() {
 	
 	int i = 1;
 	int j = 60;
 	int a = 0;
 	
 	for(a = 0; a <= 12; a++){
 		printf("I=%d J=%d\n", i, j);
 		i+=3;
 		j-=5;
	 }
    return 0;
}
