#include "Utilidades.h"
#include <stdio.h>

int main(void)
{

	int numTarjeta;
	int numTarjeta1;

	int a, i;

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
	SacarDinero(numTarjeta, i);
	break;
	case 2:
	MeterDinero(numTarjeta, i);
	break;
	case 3:
	ConsultarSaldo(numTarjeta);
	break;
	case 4:
	ConsultarMovimiento(numTarjeta);
	break;
	case 5:
	Transferencia(numTarjeta, numTarjeta1);
	case 6:
	Salir();
	break;
	}
	}while(a > 6 || a < 1);



	return 0;
}
