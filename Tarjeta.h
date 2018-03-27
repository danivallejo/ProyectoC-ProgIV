#ifndef _TARJETA_H
#define _TARJETA_H

typedef struct
{
	int numTarjeta;
	int Password;
	int Saldo;
}t_tarjeta; 

void ImprimirSaldo(t_tarjeta a);

#endif