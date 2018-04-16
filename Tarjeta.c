#include "Tarjeta.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int menu(t_tarjeta TarjetaIntroducida)
{

	int a;

	do
	{

	printf("\nBienvenido a su cuenta bancaria. Introduzca un numero para seleccionar la operacion correspondiente:  \n 1. Sacar Dinero \n 2. Ingresar Dinero \n 3. Consultar Saldo \n 4. Consultar Movimientos \n 5. Transferencia \n 6. Salir \n");

	scanf("%i", &a);

	switch(a)	
	{
	case 1:
	SacarDinero(&TarjetaIntroducida);
	break;
	case 2:
	MeterDinero(&TarjetaIntroducida);
	break;
	case 3:
	ConsultarSaldo(&TarjetaIntroducida);
	break;
	case 4:
	ConsultarMovimiento(&TarjetaIntroducida);
	break;
	case 5:
	Transferencia(&TarjetaIntroducida);
	case 6:
	Salir(&TarjetaIntroducida);
	break;
	}
	}while(a!=6);

	return 0;
}
void AltaTarjeta ()
{
	int i;
	int CantidadTarjetas;
	int aux;
	t_tarjeta *tarjetas;
	t_tarjeta tarjeta;
	
	FILE* fd;

	fd = fopen("registro.dat", "rb");

  	CantidadTarjetas = fgetc(fd);

  	if(CantidadTarjetas == -1)
  	{
  		CantidadTarjetas++;
  	}
 	tarjetas = (t_tarjeta*)malloc(100 * sizeof(t_tarjeta));	
 
 	fread(tarjetas, sizeof(t_tarjeta), CantidadTarjetas, fd);
 		
 	fclose(fd);

 	fd = fopen("registro.dat", "wb");
 		do
		{
	
		printf("Registra el numero de tu nueva tarjeta \n");
		scanf ("%i", &tarjeta.numTarjeta);
	
		aux = 0;


			for (i = 0; i < CantidadTarjetas; i++)
 			{
 				if(tarjeta.numTarjeta == tarjetas[i].numTarjeta)
 				{
 					printf("El numero de tarjeta ya esta registrado en el sistema \n");
 					aux = 1;
 				}
 				if(tarjeta.numTarjeta == 0)
 				{
 					printf("El numero de tarjeta no puede ser 0 \n");
 					aux = 1;
 					break;
 				}
			}
		}while(aux == 1);

	printf("Introduce el PIN para completar el registro de tu nueva tarjeta \n");

	scanf ("%i", &tarjeta.Password);

	tarjeta.Saldo = 0;

	tarjetas[CantidadTarjetas] = tarjeta;

	CantidadTarjetas++;

	fputc(CantidadTarjetas, fd);

	fwrite(tarjetas, sizeof(t_tarjeta), CantidadTarjetas, fd);
	
	fclose(fd);
}

 void IntroducirTarjeta()
{
  FILE * fd;
  t_tarjeta *tarjetas;
  int CantidadTarjetas;
  int i;

  int numeroTarjeta;
  int PIN;

  fd = fopen("registro.dat", "rb");

  CantidadTarjetas = fgetc(fd);

  tarjetas = (t_tarjeta*)malloc(100 * sizeof(t_tarjeta));
 
 	fread(tarjetas, sizeof(t_tarjeta), CantidadTarjetas, fd);

    printf("\n Introduce el numero de tu tarjeta \n");
    scanf ("%i", &numeroTarjeta);

    for (i = 0; i < CantidadTarjetas; i++)
    {
    	if (numeroTarjeta == tarjetas[i].numTarjeta)
    	{
    		printf ("\n Tu tarjeta esta en los servidores, ahora introduce tu PIN \n");

    		scanf ("%i", &PIN);

    		if( PIN == tarjetas[i].Password)
    		{
    			printf ("\n Tarjeta Introducida! \n");

    			menu(tarjetas[i]);

    		}else
    		{
    			printf("\n PIN INCORRECTO. \n");
    		}

    	}

    }

    printf ("Lo sentimos, su tarjeta no aparece en nuestros servidores");
}

void ConsultarSaldo(t_tarjeta* TarjetaIntroducida)
{
	int saldo;

	saldo = TarjetaIntroducida->Saldo;

	printf ("Su saldo es de %i", saldo );

}
void Salir(t_tarjeta* TarjetaIntroducida)
{

	FILE* FicheroTar;
	t_tarjeta* tarjetas;
	int CantidadTarjetas;


	FicheroTar = fopen ("registro.dat", "rb");

	CantidadTarjetas = fgetc(FicheroTar);

 	 tarjetas = (t_tarjeta*) malloc(100 * sizeof(t_tarjeta));	
 
 	fread(tarjetas, sizeof(t_tarjeta), CantidadTarjetas, FicheroTar);

 	fclose(FicheroTar);
 	
 	FicheroTar = fopen ("registro.dat", "wb");

	for(int i = 0; i < CantidadTarjetas; i++)
	{
		if(TarjetaIntroducida->numTarjeta == tarjetas[i].numTarjeta)
		{
			tarjetas[i] = *TarjetaIntroducida;
		}
	}

	fputc(CantidadTarjetas, FicheroTar);

	fwrite (tarjetas, sizeof (t_tarjeta), CantidadTarjetas, FicheroTar);

	fclose (FicheroTar);
}
