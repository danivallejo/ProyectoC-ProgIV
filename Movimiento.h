#ifndef _MOVIMIENTO_H
#define _MOVIMIENTO_H

typedef struct
{
	int numTarjeta;
	int numTarjeta2;
	char TipoMovimiento;
	int Cantidad;
	
} t_movimiento; 

void ConsultarMovimiento(t_movimiento *a);
void Transferencia(t_movimiento *a);
void SacarDinero(t_movimiento *a);
void MeterDinero(t_movimiento *a);
                                                          
#endif