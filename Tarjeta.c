#include "Utilidades.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>



void clearifneeded (char* str, FILE* fd);

void AltaTarjeta ()
{
	int numTarjeta;
	int PIN;

	FILE* fd;

	printf("Introduce el número de tu nueva tarjeta \n");
	scanf ("%d", numTarjeta);

	printf("Introduce el PIN de tu nueva tarjeta \n");
	scanf ("%d", PIN);

	fd = fopen("registro.dat", "wb");
	{
		
	}
}

void VerificarTarjeta(int numTarjeta)
{
	FILE* fd;

	t_tarjeta * t;
	int num_lines = 0;
	char c;

	fd = fopen("registro.txt", "r");

	if (fd == NULL)
	{
		printf ("Archivo no encontrado \n");
		//return -1;
	}

	char str [40];

	const char s[2] = ",";

	char * token;

	while (c = fgetc(fd) != EOF)
	{
		if (c == '\n')
			num_lines++;
	}

	t = (t_tarjeta*) malloc (num_lines * sizeof (t_tarjeta));

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

if (importe>1000)
{
	printf ("Por motivos de seguridad no se pueden sacar mas de mil euros");
}
else
{
	printf ("Ha retirado: %d€", importe );
}
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

