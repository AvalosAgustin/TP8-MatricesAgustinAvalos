#include <stdio.h>
#include <stdlib.h>
int main() 
{
	int socioE[10][32]={0},i=0,j=0,socio=0;
	int repetido[10]={0},k=0;
	int repe=0,cantidad=0;
	do
	{	
		
		printf("Ingrese el numero de socio\n");
		scanf("%d",&socio);
		
		repetido[k]=socio;

		if(socio != 0) 
		{
			do 
			{ 
				printf("edad: "); 
				scanf("%d", &j); 
				
				if((j < 0) || (j > 99))
				{
					printf("ERROR: ingrese la edad nuevamente\n\n"); 
				}
				
			} 
			
			while((j < 1) || (j > 99)); 
			socioE[i][j-1] = socio; 

		}
		cantidad++;
		i++;   
	}   
	while(i < 10 && socioE[i-1][j-1] != 0);    
	
	for(i=0;i<10;i++) 
	{ 
		for(j=0;j<32;j++) 
		{ 
			if(socioE[i][j] != 0) 
			{ 
				
				printf("%d\t%d\n", socioE[i][j], j + 1);         
				
			} 
			
		} 
		
	}  
	
	return 0;   
	
}   

