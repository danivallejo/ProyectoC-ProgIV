#ifndef _TARJETA_H
#define _TARJETA_H

typedef struct
{
	int numTarjeta;
	int Password;
	int Saldo;
} t_tarjeta;

void AltaTarjeta();
void IntroducirTarjeta();
void ConsultarSaldo(t_tarjeta TarjetaIntroducida);
void Salir(t_tarjeta TarjetaIntroducida);
//void print(t_tarjeta *t)

#endif