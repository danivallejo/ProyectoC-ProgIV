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

	while (fgets(str, 20, fd))
	{
		int d;
		sscanf(str, "%d", &d);

		if(numTarjeta != d)
		{
		printf("La tarjeta introducida es erronea: %d\n", numTarjeta);
		break;
		}
		else
		{
		printf("Tarjeta valida: %d\n. Verificar contrasenya.", numTarjeta);
		VerificarContrasenya(numTarjeta);
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

	char str [40];

	while (fgets(str, 20, fd))
	{
		int d;
		sscanf(str, "%d", &d);

		if(numTarjeta != d)
		{
		printf("El PIN introducido en incorrecto: %d\n", d);
		break;
		}
		else
		{
		printf("Tarjeta verificada: %d\n", d);
				
		}	
	
	clearifneeded(str, fd);
	}




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



 
