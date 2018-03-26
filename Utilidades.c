#include "Utilidades.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>



void clearifneeded (char* str, FILE* f);

void VerificarTarjeta(int numTarjeta)
{
	FILE* fd;
	fd = fopen("registro.txt", "r");
	if (fd == NULL)
	{
		printf ("Archivo no encontrado \n");
		//return -1;
	}

	char str [40];

	const char s[2] = ",";

	char * token;

	while (fgets(str, 20, fd))
	{
		int d;
		sscanf(str, "%d", &d);

		if(numTarjeta != d)
		{
		printf("La tarjeta introducida es erronea: %d\n", numTarjeta);
		break;
		}
		else if(numTarjeta = d)
		{
		token  = strtok (str, s);
		printf("Tarjeta valida: %d\n. Verificar contrasenya.", numTarjeta);
		}	
	
	clearifneeded(str, fd);
	}
	//return 0;
}

void VerificarContrasenya(int numTarjeta)
{
	int PIN;

	FILE* fd;
	
	printf("Introduce el PIN: ");

	scanf("%d", PIN);

	fd = fopen("registro.txt", "r");

	if (fd == NULL)
	{
		printf ("Archivo no encontrado \n");
		//return -1;
	}

	char str [20];
	const char s[2] = ",";
	
	char * token;

	//token  = strtok (str, s);


	while (fgets(str, 20, fd))
	{
		int d;
		sscanf(str, "%d", &d);

	
		while (token != NULL)
		{
			if (token = PIN)
			{
			printf ( "%s\n", token);
			token = strtok (NULL, s - 1);
			}
		}

	}	
	clearifneeded(str, fd);


}

void sacarDinero(int numTarjeta, int importe)
{
printf("Seleccione el importe que desea retirar: ");

scanf("%d", &importe);
}

void MeterDinero(int numTarjeta, int importe)
{

}
void ConsultarSaldo(int numTarjeta)
{

}
void ConsultarMovimiento(int numTarjeta)
{

}
void Transferencia(int numTarjeta, int numTarjeta1)
{

}
void Salir()
{

}

void clearifneeded (char* str, FILE* fd)
{
	if (str [strlen (str) - 1] != '\n')
	{
		int c;
		while ((c = fgetc (fd)) != EOF && c != '\n');
	}
}



 
