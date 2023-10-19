#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
	int matriz[3][3]={{0},{0}};
	int i,j,k,l,auxi=0;
	
	printf("Ingrese valores de la matriz y la voy a ordenar \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Ingrese el numero de la fila %d y columna %d\n",i+1,j+1);
		  scanf("%d",&matriz[i][j]);
		}
		
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				for(l=0;l<3;l++)
				{
					if(matriz[i][j]<matriz[k][l])
					{
						auxi=matriz[i][j]; 
						
						matriz[i][j]=matriz[k][l]; 
						
						matriz[k][l]=auxi; 
						
					}
				}
			}	
		}
	}
	
	printf("La matriz Ordenada es:\n\n");
	
	for(k=0;k<3;k++)
	{
		for(l=0;l<3;l++)
		{
			printf(" \t %d",matriz[k][l]);
			
		}
		printf("\n");
		
	}
	
	
	system("pause"); 
	
} 
