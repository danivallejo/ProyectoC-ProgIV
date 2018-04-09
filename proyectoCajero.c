#include "Tarjeta.h"
#include "Movimiento.h"

#include <stdio.h>

int main(void)
{
	int a;

	do 

	{
		printf("\n Este es el menu principal. Seleccione que operación desea realizar:\n 1. Alta Tarjeta. 2.Introducir Tarjeta. 3.Salir. \n");

		scanf ("%i", &a);

		switch (a)
		{
			case 1:
			AltaTarjeta();
			break;
			case 2: 
			IntroducirTarjeta();
			break;
			case 3:
			Salir();
			break;
		}

	}while(a > 3 || a < 1);



int menu(t_tarjeta TarjetaIntroducida)
{

	int a;

	do
	{

	printf("\nEste es el menu principal. Seleccione la operacion que desee:  \n 1. Sacar Dinero \n 2. Ingresar Dinero \n 3. Consultar Saldo \n 4. Consultar Movimientos \n 5. Transferencia \n 6. Salir");

	scanf("%i", &a);

	switch(a)	
	{
	case 1:
	SacarDinero(TarjetaIntroducida);
	break;
	case 2:
	MeterDinero(TarjetaIntroducida);
	break;
	case 3:
	ConsultarSaldo(TarjetaIntroducida);
	break;
	case 4:
	ConsultarMovimiento(TarjetaIntroducida);
	break;
	case 5:
	Transferencia(TarjetaIntroducida);
	case 6:
	Salir();
	break;
	}
	}while(a > 6 || a < 1);

	return 0;
}
return 0;
}