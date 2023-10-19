#include <stdio.h> 
#include <stdlib.h> 
/* 
Ingresar una matriz de 5 (cinco) filas por 5 (cinco) columnas con valores
enteros, primeramente, la diagonal principal, luego el triángulo superior y
por último el triángulo inferior. Mostrar por pantalla el contenido de la
matriz.


*/
int main() 	
{ 
	
	int matriz[5][5]={0},i=0,j=0; 
	printf("Ingrese los valores de la diagonal\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(i==j)
			{
				scanf("%d",&matriz[i][j]);
			}
		}
		
	}
	
	printf("Ingrese los valores de el triangulo superior\n");
	
	for(i=0;i<5;i++) 
		
	{ 
		
		for(j=0;j<5;j++) 
			
		{ 
			
			if (i<j) 
				
			{ 
				
				scanf("%d",&matriz[i][j]); 
				
			} 
			
		} 
		
	} 
	
	printf("Ingrese los valores de el triangulo inferior\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(i>j)
			{
				scanf("%d",&matriz[i][j]);
			}
		}
	}
	printf("La matriz es :\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			
			
				printf(" \t %d",matriz[i][j]);
			
		}
		printf("\n");
	}
	system("pause"); 
	
	
	return 0; 
	
} 


	
	
 
