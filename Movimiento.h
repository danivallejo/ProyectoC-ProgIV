#include "Tarjeta.h"

#ifndef _MOVIMIENTO_H
#define _MOVIMIENTO_H

typedef struct
{
	int numTarjeta1;
	int numTarjeta2;
	char TipoMovimiento[15];
	int Cantidad;
	
} t_movimiento; 

void ConsultarMovimiento(TarjetaIntroducida);
void Transferencia(t_tarjeta TarjetaIntroducida);
void SacarDinero(t_tarjeta TarjetaIntroducida);
void MeterDinero(t_movimiento *m);
                                                          
#endif