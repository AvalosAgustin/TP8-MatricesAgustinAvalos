#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) 
{
	int matriz[6][5]={{0},{0}};
	int i,j;
	
	
		printf("Ingrese el numero de fila\n");
		scanf("%d",&i);
		while(i!=0)
		{
			if(i<0 || i>6 )
			{
				printf("volver a ingresar la fila debe ser mayor que 1 y menor que 6  (0 para cortar)\n");
				scanf("%d",&i);
			}
			
			if(i>1 && i<6)
			{
				printf("Ingrese el numero de columna\n");
				scanf("%d",&j);
				
				if(j<0 ||j>5)
				{
					printf("Ingrese nuevamente el numero de columna debe ser mayor o igual que 1  y menor o igual que 5\n");
					scanf("%d",&j);
				}
				
				printf("Ingrese el numero que esta en la fila %d y la columna %d\n",i,j);
				scanf("%d",&matriz[i-1][j-1]);
				
				printf("Ingrese el numero de fila\n");
				scanf("%d",&i);
				
			}
			
		}
		printf("La matriz es:\n\n");
		for(i=0;i<6;i++)
		{
			for(j=0;j<5;j++)
			{
				printf("\t  %d",matriz[i][j]);
			}
			printf("\n");
		}
			

		
	
	
	

	
	return 0;
}

