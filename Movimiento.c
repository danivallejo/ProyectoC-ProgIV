#include "Movimiento.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void SacarDinero(t_movimiento *a)
{
int importe;

printf("Seleccione el importe que desea retirar: ");

scanf("%d", &importe);

(*a).Cantidad = importe;

if (importe>1000)
{
	printf ("Por motivos de seguridad no se pueden sacar mas de mil euros");
}
else
{
	printf ("Ha retirado: %d€", importe);
}
}

void MeterDinero(t_movimiento *a)
{

}
void ConsultarMovimiento(t_movimiento *a)
{

}
void Transferencia(t_movimiento *a)
{

}

