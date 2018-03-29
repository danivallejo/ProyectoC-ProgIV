#ifndef _TARJETA_H
#define _TARJETA_H

typedef struct
{
	char [4] numTarjeta;
	int [4] Password;
	int Saldo;
}t_tarjeta; 

void AltaTarjeta();
void VerificarTarjeta(t_tarjeta a);
void VerificarConstrasenya(t_tarjeta a);
void ConsultarSaldo(t_tarjeta a);
void Salir();

#endif