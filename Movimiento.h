#ifndef _MOVIMIENTO_H
#define _MOVIMIENTO_H

typedef struct
{
	char [4] numTarjeta;
	char TipoMovimiento;
	int Cantidad;
	char [4] numTarjeta2;
} t_movimiento; 

void ConsultarMovimiento(t_movimiento a);
void Transferencia(t_movimiento a);
void SacarDinero(t_movimiento a);
void MeterDinero(t_movimiento a);
                                                          
#endif