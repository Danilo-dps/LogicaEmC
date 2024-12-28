#include <stdio.h>

#define TAM 10

int main() {

    int a[TAM];

    int i;
    printf("Lê os valores do Array\n");
    for (i = 0; i < TAM; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < TAM; i++)
    {
        if(a[i] % 2 == 0){
            a[i] = 1;
        }
        else{
            a[i] = -1;
        }
    }

    for (i = 0; i < TAM; i++){
        printf("%d ", a[i]);
    }

    return 0;
}