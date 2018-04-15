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
		printf("\n Este es el menu principal. Seleccione que operación desea realizar:\n 1. Alta Tarjeta. 2.Introducir Tarjeta. 3.Salir. \n");
		//a = menu(); //USAD ESTE CODIGO EN VEZ DEL SSCANF Y EL COMENTADO ABAJO. DEBERIA VENIROS DE LA PRACTICA 4.
		//SI NO LO USAIS, SI METEIS ALGUN VALOR QUE NO ESTE EN EL SWITCH VA A PETAR.
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

/** METED ESTE CODIGO Y CAMBIAD EL MENU A VUESTRO ANTOJO:
int menu(void)
{
	char str[MAX_LENGTH];
	int len;
	int option;

	do {
		printf("\t1. Introducir asignatura\n");
		printf("\t2. Imprimir listado\n");
		printf("\t3. Calcular media\n");
		printf("\n");
		printf("Seleccione una opción (q para salir): ");

		fgets(str, MAX_LENGTH, stdin);
		clear_if_needed(str); 

		len = sscanf(str, "%d", &option); //En length NO la tienes en teclado. Si no se puede transformar, se devuelve un 0.
		printf("\n");
	} while ((len == 0 && str[0] != 'q') || (len > 0 && (option > 3 || option < 1))); //Si metemos "Beñat", el valor que dará es un 0 (como error).

	return (str[0] == 'q')?0:option; //Si mete una q, devolvemos 0. Si no, option.
}

**/
