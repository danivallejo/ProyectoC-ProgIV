#include "Tarjeta.h"
#include "Movimiento.h"

#include <stdio.h>

#define MAX_LENGTH	5

int main(void)
{
	printf("Empezamos\n");
	int a;

	t_tarjeta TarjetaIntroducida;

	do 

	{
		printf("\n Este es el menu principal. Introduzca un numero para seleccionar la operacion que desee realizar:\n 1. Alta Tarjeta. \n2.Introducir Tarjeta. \n3.Salir. \n");
		
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
			Salir(&TarjetaIntroducida);
			break;
		}

	}while(a != 3);

return 0;
}