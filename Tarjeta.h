#ifndef _TARJETA_H
#define _TARJETA_H

typedef struct
{
	char [4] numTarjeta;
	int [4] Password;
	int Saldo;
}t_tarjeta; 

void ImprimirSaldo(t_tarjeta a);
void AltaTarjeta();
void VerificarTarjeta(int numTarjeta);
void VerificarConstrasenya(int numTarjeta);
void SacarDinero(int numTarjeta, int importe);
void MeterDinero(int numTarjeta, int importe);
void ConsultarSaldo(int numTarjeta);
void ConsultarMovimiento(int numTarjeta);
void Transferencia(int numTarjeta, int numTarjeta1);
void Salir();

#endif