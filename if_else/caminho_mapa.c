#include <stdio.h>
#include <locale.h>

int main()
{
		setlocale (LC_ALL, "Portuguese");
	int caminho;
	scanf("%d", &caminho);
	if(caminho == 1)
	{
		scanf("%d", &caminho);
		if(caminho == 4)
		{
			scanf("%d", &caminho);
			if(caminho == 6)
			{
				printf("Caminho válido\nDestino alcançado\n");
			}	
			else
			{
				printf("Caminho inválido\n");
			}
		}
		else
		{
			printf("Caminho inválido\n");
		}
	}	
	else if(caminho == 2)
	{
		printf("Caminho válido, mas o destino não foi alcançado");
	}
	else if(caminho == 3)
	{
		scanf("%d", &caminho);
		if(caminho == 5)
		{
			scanf("%d", &caminho);
			if(caminho == 7)
			{
				scanf("%d", &caminho);
				if(caminho == 8)
				{
					printf("Caminho válido\nDestino alcançado\n");
				}
			    else
				{ 
			    	printf("Caminho inválido\n");
				}
			}
			else
			{
				printf("Caminho inválido\n");
			}
				
		}
		else
		{
			printf("Caminho inválido\n");
		}
		
	}
	else
	{
	    printf("Caminho inválido\n");
    }
	return 0;
}
