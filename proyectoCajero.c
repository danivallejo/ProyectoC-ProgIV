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

	printf("\nEste es el menu principal. Seleccione la operacion que desee: ");/* \n 1. Alta Tarjeta \n 2. Introducir Tarjeta \n 3. Sacar Dinero \n
	4. Ingresar Dinero \n 5. Consultar Saldo \n 6. Consultar Movimientos \n 7. Transferencia \n 8. Salir");*/

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
	SacarDinero(&m);
	break;
	case 4:
	MeterDinero(&m);
	break;
	case 5:
	ConsultarSaldo(&t);
	break;
	case 6:
	ConsultarMovimiento(&m);
	break;
	case 7:
	Transferencia(&m);
	case 8:
	Salir();
	break;
	}
	}while(a > 8 || a < 1);



	return 0;
}
