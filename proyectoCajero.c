#include "Tarjeta.h"
#include "Movimiento.h"

#include <stdio.h>

int main(void)
{

	t_tarjeta t;
	t_movimiento m;

	char numTarjeta[10];
	char numTarjeta1[10];

	int a;

	do 

	{
		printf("\n Este es el menu principal. Seleccione que operación desea realizar: 1. Alta Tarjeta. 2.Introducir Tarjeta. 3.Salir. \n");

		scanf ("%i", &a);

		switch (a)
		{
			case 1:
			AltaTarjeta(&t);
			break;
			case 2: 
			IntroducirTarjeta(&t);
			break;
			case 3:
			Salir();
			break;
		}

	}while(a > 3 || a < 1);





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
	SacarDinero(&m, &t);
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
