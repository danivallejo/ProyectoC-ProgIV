#include "Tarjeta.h"
#include "Movimiento.h"

#include <stdio.h>

int main(void)
{

	t_tarjeta t;
	t_movimiento m;

	int numTarjeta;
	int numTarjeta1;

	int a, i;

// ESTO LO HE QUITADO TRAS HABLAR CON CERRO

	//printf("Introduce el numero de la tarjeta para poder ser verificada ");

	//scanf("%i", &numTarjeta);

	//VerificarTarjeta(numTarjeta);

	//printf("Introduce el PIN de la tarjeta para poder ser verificada ");

	//*PIN = getchar();

	//VerificarContrasenya(PIN);

	do
	{

	printf("Este es el menu principal. Seleccione la operacion que desee: ");

	scanf("%i", &a);

	switch(a)	
	{
	case 1:
	AltaTarjeta(&t);
	break;
	case 2: 
	VerificarTarjeta(&t);
	break;
	case 3:
	VerificarContrasenya(&t);
	break;
	case 4:
	SacarDinero(&m);
	break;
	case 5:
	MeterDinero(&m);
	break;
	case 6:
	ConsultarSaldo(&t);
	break;
	case 7:
	ConsultarMovimiento(&m);
	break;
	case 8:
	Transferencia(&m);
	case 9:
	Salir();
	break;
	}
	}while(a > 9 || a < 1);



	return 0;
}
