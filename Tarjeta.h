#ifndef _TARJETA_H
#define _TARJETA_H

typedef struct
{
	int numTarjeta;
	int Password;
	int Saldo;
}t_tarjeta; 


int menu(t_tarjeta TarjetaIntroducida);
void AltaTarjeta();
void IntroducirTarjeta();
void ConsultarSaldo(t_tarjeta TarjetaIntroducida);
void Salir();
//void print(t_tarjeta *t)

#endif