#ifndef _TARJETA_H
#define _TARJETA_H

typedef struct
{
	char [4] numTarjeta;
	int [4] Password;
	int Saldo;
}t_tarjeta; 

void ImprimirSaldo(t_tarjeta a);

#endif