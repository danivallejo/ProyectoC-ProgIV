#include "Utilidades.h"
#include <stdio.h>



void VerificarTarjeta()
{


}
void SacarDinero(int importe)
{

int c = 100;
int l = 50;
int xx = 20;
int x = 10;
int v = 5;


 
printf("Seleccione el importe que desea retirar: " , importe);


 if(importe = c, l, xx, x, v)
 {
 	printf("Billete de: %i", importe);
 }
 else
 {
 int dif;
 int eleccion;
 	do
 	{
 	switch(eleccion)
 	{
 	case 5: 
 		dif= importe- v;
 		break;
 	case 10:
 		dif= importe- x;
 		break;
 	case 20:
 		dif= importe- xx;
 		break;
 	case 50:
 		dif= importe- l;
 		break;
 	case 100:
 		dif = importe- c;
 		break; 
 	default:
 		break;
 	}
	

 	if(dif = c, l, xx, x, v)
 	{
 	printf("Otro billete de: " , dif);
 	}

 	}while(importe = eleccion + dif);
 }
}
void MeterDinero()
{

}
void ConsultarSaldo()
{

}
void ConsultarMovimiento()
{

}
void Transferencia()
{

}
void Salir()
{

}


 
