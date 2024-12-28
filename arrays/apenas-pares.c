#include <stdio.h>

#define TAM 10

int main(){

   int i;

   int a[TAM];

   for (int i = 0; i < TAM; ++i){
       scanf("%d", &a[i]);
   }

   for (i = 0; i < TAM; ++i){
        if(i % 2 == 0){
            printf("Exibindo o valor: %d e exibindo o índice: %d\n", a[i], i);         
        }
   }
}
