#include "Tarjeta.h"

#ifndef _MOVIMIENTO_H
#define _MOVIMIENTO_H

typedef struct
{
	char numTarjeta1[11];
	char numTarjeta2[11];
	char TipoMovimiento[15];
	int Cantidad;
	
} t_movimiento; 

void ConsultarMovimiento(t_movimiento *m);
void Transferencia(t_movimiento *m);
void SacarDinero(t_movimiento *m, t_tarjeta *t);
void MeterDinero(t_movimiento *m);
                                                          
#endif