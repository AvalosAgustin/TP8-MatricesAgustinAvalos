#include <stdio.h> 
#include <stdlib.h> 

int main() 	
{ 
	int matriz[3][3]={{0},{0}},i=0,j=0; 
	
	printf("ingrese el valor de las columnas par de la matriz: \n"); 
	
	for(i=0;i<3;i++) 
	{ 
		for(j=0;j<3;j++) 
		{ 
			if(j==1) 
			{ 
				scanf("%d",&matriz[i][j]); 
				if(matriz[i][j]%2!=0)
				{
					while(matriz[i][j]%2!=0)
					{
						printf("El numero no es par ingrese nuevamete \n");
						scanf("%d",&matriz[i][j]);
						
					}
					
					
				}
			} 
		} 
	} 
	
	printf("ingrese el valor de la columna impares de la matriz: \n"); 
	
	for(i=0;i<3;i++) 
		
	{ 
		
		for(j=0;j<3;j++) 
			
		{ 
			
			
			if (j==0 || j==2) 
			{ 
				scanf("%d",&matriz[i][j]);
				if(matriz[i][j]%2!=1)
				{
					while(matriz[i][j]%2!=1)
					{
						printf("El numero no es impar ingrese nuevamete \n");
						scanf("%d",&matriz[i][j]);
					}
					
					
				}
			} 
		} 
	} 
	
	printf("el contenido de la matriz es: \n"); 
	
	for(i=0;i<3;i++) 
	{ 
		for (j=0;j<3;j++) 
		{ 
			
			printf("\t %d",matriz[i][j]); 
			
		} 
		printf("\n"); 
	}
 	
	system("pause"); 
	return 0; 
} 
