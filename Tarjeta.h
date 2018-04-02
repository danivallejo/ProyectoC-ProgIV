#ifndef _TARJETA_H
#define _TARJETA_H

typedef struct
{
	char numTarjeta[11];
	int Password;
	int Saldo;
}t_tarjeta; 

void AltaTarjeta(t_tarjeta *t);
void VerificarTarjeta(t_tarjeta *t);
void VerificarContrasenya(t_tarjeta *t);
void ConsultarSaldo(t_tarjeta *t);
void Salir();
//void print(t_tarjeta *t)

#endif