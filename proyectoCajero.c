#include "Utilidades.h"
#include <stdio.h>

int main(void)
{

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
	AltaTarjeta();
	case 2: 
	SacarDinero(numTarjeta, i);
	break;
	case 3:
	MeterDinero(numTarjeta, i);
	break;
	case 4:
	ConsultarSaldo(numTarjeta);
	break;
	case 5:
	ConsultarMovimiento(numTarjeta);
	break;
	case 6:
	Transferencia(numTarjeta, numTarjeta1);
	case 7:
	Salir();
	break;
	}
	}while(a > 7 || a < 1);



	return 0;
}
