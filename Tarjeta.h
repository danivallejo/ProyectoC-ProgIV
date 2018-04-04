#ifndef _TARJETA_H
#define _TARJETA_H

typedef struct
{
	int numTarjeta;
	int Password;
	int Saldo;
}t_tarjeta; 

void AltaTarjeta(t_tarjeta *t);
void IntroducirTarjeta(t_tarjeta *t);
void ConsultarSaldo(t_tarjeta *t);
void Salir();
//void print(t_tarjeta *t)

#endif