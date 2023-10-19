#include <stdio.h>

int main(int argc, char *argv[]) 
{
	int empresa[100][4] = {{0}};
	int i = 0, k = 0, cont1 = 0;
	int cliente[100];
	int clientes_maximos[100] = {0}; 
	int num_clientes_maximos = 0;
	int monto, mayor = 0, persona = 0, transaccion, NC,suma=0;
	
	do
	{
		printf("Ingrese el numero de cliente del 1 al 100 (Ingrese 0 para dejar de ingresar)\n");
		scanf("%d", &NC);
		
		if (NC > 100)
		{
			while (NC > 100)
			{
				printf("El numero de cliente ingresado debe ser menor a 100\n");
				scanf("%d", &NC);
			}
		}
		
		if (NC > 0 && NC <= 100)
		{
			cliente[k] = NC;
			
			printf("Ingrese el codigo de transaccion\n");
			printf("1=Depósito 2=Extracción 3=Comisiones deducidas 4=Intereses acreditados\n");
			scanf("%d", &transaccion);
			
			if (transaccion < 1 || transaccion > 4)
			{
				while (transaccion < 1 || transaccion > 4)
				{
					printf("El codigo de transaccion es incorrecto\n");
					printf("Por favor ingrese nuevamente el codigo de transaccion con los ya mencionados numeros que son:\n");
					printf("1=Depósito 2=Extracción 3=Comisiones deducidas 4=Intereses acreditados");
					scanf("%d", &transaccion);
				}
			}
			
			printf("Ingrese el monto de la operación ingresada\n");
			scanf("%d", &monto);
			
			empresa[NC - 1][transaccion - 1] =empresa[NC - 1][transaccion - 1]+ monto;
			
			if (monto > mayor)
			{
				
				mayor = monto;
				clientes_maximos[0] = NC;
				num_clientes_maximos = 1;
			}
			else
			{
				if (monto == mayor)
				{
					
					clientes_maximos[num_clientes_maximos] = NC;
					num_clientes_maximos++;
				}
				
			}
			
			
			k++;
			cont1++;
		}
	} while (NC >= 1);
	
	printf("N° De Cliente	Total Depósitos  Total Extracciones	Total Comisiones  Total Intereses	  Saldo\n");
	
	for (i = 0; i < cont1; i++) 
	{
		NC = cliente[i];
		printf("%d", NC);
		
		for (transaccion = 0; transaccion < 5; transaccion++) 
		{
			if(transaccion<4)
			{
				printf("                    %d", empresa[NC - 1][transaccion]);
				suma=suma+empresa[NC-1][transaccion];	
			}
			
				if(transaccion==4)
				{
					
			
					printf("             %d",suma);
				}
				
			
			
		}
		
		printf("\n");
	}
	printf("Clientes con el depósito máximo de %d:\n", mayor);
	for (i = 0; i < num_clientes_maximos; i++)
	{
		printf("Cliente %d\n", clientes_maximos[i]);
	}
	printf("depositaron un máximo de %d:\n", mayor);
	

	
	return 0;
}


