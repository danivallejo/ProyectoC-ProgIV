#include "Tarjeta.h"
#include "Movimiento.h"

#include <stdio.h>

int main(void)
{
	printf("Empezamos\n");
	int a;

	t_tarjeta TarjetaIntroducida;

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
			Salir(TarjetaIntroducida);
			break;
		}
	}while(a != 3);

return 0;
}

