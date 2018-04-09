#include "Tarjeta.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NUM 1

void clearifneeded (char* str, FILE* fd);

void AltaTarjeta ()
{
	int numeroTarjeta;
	int PIN;
	int saldo = 0;
	int i;
	int CantidadTarjetas;
	int aux;
	t_tarjeta *tarjetas;
	t_tarjeta *tarjeta;

	FILE* fd;

	fd = fopen("registro.dat", "r+b");
	 //leer la cantidad de elementos
  	CantidadTarjetas = fgetc(fd);
  
  	//crear memoria para guardar los datos
 	 tarjetas = (t_tarjeta*)malloc(CantidadTarjetas * sizeof(t_tarjeta));	
  
  	//leer los datos del binario al array
 
 	fread(tarjetas, sizeof(t_tarjeta), CantidadTarjetas, fd);

	
 		do
		{
			printf("Registra el número de tu nueva tarjeta \n");
			scanf ("%i", &numeroTarjeta);

			aux = 0;


			for (i = 0; i < CantidadTarjetas; i++)
 			{
 				if(numeroTarjeta == tarjetas[i].numTarjeta)
 				{
 					printf("El número de tarjeta ya está registrado en el sistema \n");
 					aux = 1;
 				}
			}
		}while(aux = 1);

	printf("Introduce el PIN para completar el registro de tu nueva tarjeta \n");
	scanf ("%i", &PIN);
	

	(*tarjeta).numTarjeta = numeroTarjeta;
	(*tarjeta).Password = PIN;
	(*tarjeta).Saldo = saldo;

	fputc(MAX_NUM, fd);

	fwrite(tarjeta, sizeof(t_tarjeta), MAX_NUM, fd);

	fclose(fd);
}

 void IntroducirTarjeta()
{
  FILE * fd;
  //char *w;
  t_tarjeta *tarjetas;
  int CantidadTarjetas;
  int i;

  int numeroTarjeta;
  int PIN;

  fd = fopen("registro.dat", "rb");
	
  //leer la cantidad de elementos
  CantidadTarjetas = fgetc(fd);
  
  //crear memoria para guardar los datos
  tarjetas = (t_tarjeta*)malloc(CantidadTarjetas * sizeof(t_tarjeta));	
  
  //leer los datos del binario al array
 
 	fread(tarjetas, sizeof(t_tarjeta), CantidadTarjetas, fd);

    printf("\n Introduce el numero de tu tarjeta \n");
    scanf ("%i", &numeroTarjeta);

    for (i = 0; i < CantidadTarjetas; i++)
    {
    	if (numeroTarjeta == tarjetas[i].numTarjeta)
    	{
    		printf ("\n Tu tarjeta está en los servidores, ahora introduce tu PIN \n");

    		scanf ("%i", &PIN);

    		if( PIN == tarjetas[i].Password)
    		{
    			printf ("\n ¡Tarjeta Introducida! \n");

    			menu(tarjetas[i]);

    		}else
    		{
    			printf("\n PIN INCORRECTO. \n");
    		}

    	}else
    	{
    		printf ("Lo sentimos, su tarjeta no aparece en nuestros servidores");
    	}

    }
}

void ConsultarSaldo(t_tarjeta TarjetaIntroducida)
{
	int saldo;

	saldo = TarjetaIntroducida.Saldo;

	printf ("Su saldo es de %i", saldo );

}
void Salir()
{

}
void clearifneeded (char* str, FILE* fd)
{
	if (str [strlen (str) - 1] != '\n')
	{
		int c;		while ((c = fgetc (fd)) != EOF && c != '\n');
	}
}
/*
void print (t_tarjeta *t)
{
	printf("(%i, %i, %i)", p->numTarjeta, p->PIN, p->saldo);
}
*/
