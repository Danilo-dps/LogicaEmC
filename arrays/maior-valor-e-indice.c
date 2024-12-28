#include<stdio.h>
#define TAM 10

int main()
{
	/* declara um array para armazenar 10 inteiros */
	int a[TAM];
	/* controlar o número de repetições */
	int i;
    /* armazena o maior valor */
    int x = 0;

	printf("lê os números e armazena-os no array\n");

	for (i = 0; i < TAM; ++i)
	{
		scanf("%d",&a[i]);

        if(a[i] > x){
            x = a[i];
        }

	}
    printf("Maior número: %d\n", a[i]);

    for (i = 0; i < TAM; i++)
    {

        if(a[i] ==  x){
            printf("índice %d\n", i);
        }
    }
    return 0;
}