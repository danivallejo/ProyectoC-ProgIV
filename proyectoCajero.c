#include "Utilidades.h"
#include <stdio.h>

int main(void)
{
	int i;

	int numTarjeta;

	int a;


	printf("Introduce el numero de la tarjeta para poder ser verificada ");

	scanf("%i", &numTarjeta);

	VerificarTarjeta(numTarjeta);

	do
	{

	printf("Este es el menu principal. Seleccione la operacion que desee: ");

	scanf("%i", &a);

	switch(a)	
	{
	case 1: 
	SacarDinero(i);
	break;
	case 2:
	MeterDinero();
	break;
	case 3:
	ConsultarSaldo();
	break;
	case 4:
	ConsultarMovimiento();
	break;
	case 5:
	Transferencia();
	case 6:
	Salir();
	break;
	}
	}while(a > 6 || a < 1);

	return 0;
}
