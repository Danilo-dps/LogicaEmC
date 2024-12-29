#include <stdio.h>

#define TAM 10

int main(){

    int a[TAM];
    int i;

    printf("Lendo os números.\n");

    for (i = 0; i < TAM; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Invertendo os números.\n");
    for (i = TAM - 1; i >= 0; i--){
        printf("%d\n", a[i]);
    }

    return 0;
}