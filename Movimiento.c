#include "Movimiento.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TIPO1 "Retira Dinero"
#define TIPO2 "ingresar"
#define TIPO3 "transferencia"

#define MAX_NUM 1

void SacarDinero(t_tarjeta TarjetaIntroducida)
{
	FILE* FicheroMov;
	FILE* FicheroTar;
	int importe;
	int CantidadTarjetas;
	t_tarjeta* tarjetas;
	t_movimiento Movimiento;

	FicheroMov = fopen("Movimientos.dat", "ab");

	FicheroTar = fopen ("registro.dat", "r+b");

	CantidadTarjetas = fgetc(FicheroTar);
  
  	//crear memoria para guardar los datos
 	 tarjetas = (t_tarjeta*)malloc(CantidadTarjetas * sizeof(t_tarjeta));	
  
  	//leer los datos del binario al array
 
 	fread(tarjetas, sizeof(t_tarjeta), CantidadTarjetas, FicheroTar);
	
	do
	{
		printf("\nSeleccione el importe que desea retirar: Por motivos de seguridad no se pueden sacar mas de mil euros\n");

		scanf("%i", &importe);

		if( importe > TarjetaIntroducida.Saldo )
		{
			printf(" \n El importe que deseas sacar es mayor que el saldo disponible \n");
		}

	}while(importe > 1000||importe < 0 || importe > TarjetaIntroducida.Saldo);

	printf ("Ha retirado: %d€", importe);

	Movimiento.numTarjeta1 = TarjetaIntroducida.numTarjeta;
 	Movimiento.TipoMovimiento[15] = TIPO1;
	Movimiento.numTarjeta2 = NULL;
	Movimiento.Cantidad = importe;
	
	fputc(MAX_NUM, FicheroMov);

	fwrite(Movimiento, sizeof(t_movimiento), MAX_NUM, FicheroMov);

	fclose(FicheroMov);


	for(i = 0; i < CantidadTarjetas; i++)
	{
		if(TarjetaIntroducida.numTarjeta == tarjetas[i].numTarjeta)
		{
			tarjetas[i].Saldo = tarjetas[i].Saldo - importe;
		}
	}

	fputc(CantidadTarjetas, FicheroTar);

	fwrite (tarjetas, sizeof (t_tarjeta), CantidadTarjetas, FicheroTar);

	fclose (FicheroTar);
}

void MeterDinero(t_tarjeta TarjetaIntroducida)
{
	//LEEMOS DE FICHERO EN UN ARRAY
	FILE* FicheroMov;
	FILE* FicheroTar;
	int importe;
	int CantidadTarjetas;
	t_tarjeta* tarjetas;
	t_movimiento Movimiento;

	FicheroMov = fopen("Movimientos.dat", "ab");

	FicheroTar = fopen ("registro.dat", "r+b");

	CantidadTarjetas = fgetc(FicheroTar);
  
  	//crear memoria para guardar los datos
 	 tarjetas = (t_tarjeta*)malloc(CantidadTarjetas * sizeof(t_tarjeta));	
  
  	//leer los datos del binario al array
 
 	fread(tarjetas, sizeof(t_tarjeta), CantidadTarjetas, FicheroTar);


	printf("\n ¿Cuanto dinero desea ingresar? \n");

	scanf ("%i", &importe);

	printf ("Ha ingresado: %d€", importe);

	//Modificamos el fichero

	Movimiento.numTarjeta1 = TarjetaIntroducida.numTarjeta;
 	Movimiento.TipoMovimiento[15] = TIPO1;
	Movimiento.numTarjeta2 = NULL;
	Movimiento.Cantidad = importe;
	
	fputc(MAX_NUM, FicheroMov);

	fwrite(Movimiento, sizeof(t_movimiento), MAX_NUM, FicheroMov);

	fclose(FicheroMov);


	for(i = 0; i < CantidadTarjetas; i++)
	{
		if(TarjetaIntroducida.numTarjeta == tarjetas[i].numTarjeta)
		{
			tarjetas[i].Saldo = tarjetas[i].Saldo + importe;
		}
	}

	fputc(CantidadTarjetas, FicheroTar);

	fwrite (tarjetas, sizeof (t_tarjeta), CantidadTarjetas, FicheroTar);

	fclose (FicheroTar);


}


void ConsultarMovimiento(t_movimiento *m)
{


}

void Transferencia(t_tarjeta TarjetaIntroducida)
{	
	FILE* FicheroMov;
	FILE* FicheroTar;
	int importe;
	int i;
	int x;
	int aux;
	int CantidadTarjetas;
	t_tarjeta* tarjetas;
	t_movimiento Movimiento;
	int numTarjeta2;

	FicheroMov = fopen("Movimientos.dat", "ab");

	FicheroTar = fopen ("registro.dat", "r+b");

	CantidadTarjetas = fgetc(FicheroTar);
  
  	//crear memoria para guardar los datos
 	 tarjetas = (t_tarjeta*)malloc(CantidadTarjetas * sizeof(t_tarjeta));	
  
  	//leer los datos del binario al array
 
 	fread(tarjetas, sizeof(t_tarjeta), CantidadTarjetas, FicheroTar);
	
	do
	{
		printf("\nSeleccione el importe que desea transferir. \n");

		scanf("%i", &importe);

		if( importe > TarjetaIntroducida.Saldo )
		{
			printf(" \n El importe que deseas trasnferir es mayor que el saldo disponible \n");
		}

	}while(importe > TarjetaIntroducida.Saldo);

	do
	{
		printf(" \n Introduce el número de la tarjeta a la que desea hacer la transferencia \n");
		scanf ("%i", &numTarjeta2);

		aux = 0;

		for(i = 0; i < CantidadTarjetas; i++)
		{
			if(numTarjeta2 == tarjetas[i].numTarjeta)
			{

				Movimiento.numTarjeta1 = TarjetaIntroducida.numTarjeta;
 				Movimiento.TipoMovimiento[15] = TIPO3;
				Movimiento.numTarjeta2 = numTarjeta2;
				Movimiento.Cantidad = importe;
	
				fputc(MAX_NUM, FicheroMov);

				fwrite(Movimiento, sizeof(t_movimiento), MAX_NUM, FicheroMov);

				fclose(FicheroMov);

				tarjetas[i].Saldo = tarjetas[i].Saldo + importe;

				for(x = 0; x < CantidadTarjetas; x++)
				{
					if(TarjetaIntroducida == tarjetas[x].numTarjeta)
					{
						tarjetas[x].Saldo = tarjetas[x].Saldo - importe;

						printf("\n La transferencia se ha realizado con éxito \n");
					}
				}

			}else
			{
				printf(" \n El número de la tarjeta que recibe la transferencia no existe en nuestros servidores\n");

				aux = 1;
			}
		}

		fputc(CantidadTarjetas, FicheroTar);

		fwrite (tarjetas, sizeof (t_tarjeta), CantidadTarjetas, FicheroTar);

		fclose (FicheroTar);

	}while(aux = 1);

}

