#include "Movimiento.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TIPO1 "retirar"
#define TIPO2 "ingresar"
#define TIPO3 "transferencia"

#define MAX_NUM 1

void SacarDinero(t_movimiento *m, t_tarjeta *t)
{
	FILE* fd;
	fd = fopen("Movimientos.dat", "ab");

if((*t).numTarjeta[4] == " ")
{
printf("\nPara realizar una operacion es necesario introducir tarjeta. Vaya a la operacion de verificacion de tarjeta");

}
else
{

int importe;

printf("\nSeleccione el importe que desea retirar: Por motivos de seguridad no se pueden sacar mas de mil euros\n");

scanf("%i", &importe);


do
{
	(*m).numTarjeta1[4] = (*t).numTarjeta[4];
 	(*m).TipoMovimiento[15] = TIPO1;
	(*m).numTarjeta2[4] = " ";
	(*m).Cantidad = importe;
	
	fputc(MAX_NUM, fd);

	fwrite(m, sizeof(t_movimiento), MAX_NUM, fd);
	printf ("Ha retirado: %d€", importe);

} while(importe>1000||importe<0);

fclose(fd);

}

}
void MeterDinero(t_movimiento *m)
{
	//LEEMOS DE FICHERO EN UN ARRAY



	int importe;

	printf("\n ¿Cuanto dinero desea ingresar? \n");

	scanf ("%i", &importe);

	//Modificamos el fichero



}
void ConsultarMovimiento(t_movimiento *m)
{
	

}
void Transferencia(t_movimiento *m)
{

}

