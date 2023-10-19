#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>

int main(int argc, char *argv[]) 
{
	int sorteo[3][6] = {{0}, {0}}; 
	int loto[2][43] = {{0}, {0}}; 
	srand(time(NULL)); 
	int i, j, k, l, auxi = 0, n, cont1 = 0, cont2 = 0, auxi2;
	
	
	for (i = 0; i < 3; i++) 
	{
		for (j = 0; j < 6; j++) 
		{
			sorteo[i][j] = rand() % 43; 
			auxi = sorteo[i][j];
			for (k = 0; k < j + 1; k++) 
			{
				if (sorteo[i][j] == sorteo[i][k]) 
				{
					cont2++;
				}
				if (cont2 == 2) 
				{
					sorteo[i][j] = rand() % 43; 
					cont2 = 0;
					k = -1;
				}
			}
		}
	}
	
	
	for (i = 0; i < 3; i++) 
	{
		for (j = 0; j < 6; j++) 
		{
			loto[0][sorteo[i][j]]++;
		}
	}
	
	printf("Ingrese un número\n");
	scanf("%d", &n);
	
	
	for (i = 0; i < 3; i++) 
	{
		for (j = 0; j < 6; j++) 
		{
			if (n == sorteo[i][j]) 
			{
				cont1 = cont1 + 1;
			}
		}
	}
	
	
	for (i = 0; i < 43; i++) 
	{
		loto[1][i] = i;
	}
	
	for (i = 0; i < 43; i++) 
	{
		for (j = 0; j < 43; j++) 
		{
			if (loto[0][j] < loto[0][i]) 
			{
				auxi2 = loto[0][j];
				loto[0][j] = loto[0][i];
				loto[0][i] = auxi2;
				auxi2 = loto[1][j];
				loto[1][j] = loto[1][i];
				loto[1][i] = auxi2;
			}
		}
	}
	
	
	printf("El sorteo es:\n");
	for (i = 0; i < 3; i++) 
	{
		printf("El sorteo %d sus números son:\n", i + 1);
		for (j = 0; j < 6; j++) 
		{
			printf(" \t%d", sorteo[i][j]);
		}
		printf("\n");
	}
	
	
	if (cont1 > 0) 
	{
		printf("El número %d aparece %d veces en los sorteos.\n", n, cont1);
	} 
	else 
	{
		printf("El número %d no aparece en los sorteos.\n", n);
	}
	
	
	printf("Los números más frecuentes son:\n");
	for (i = 0; i < 5; i++) 
	{
		printf("Número: %d - Apariciones: %d\n", loto[1][i], loto[0][i]);
	}
	
	return 0;
}
