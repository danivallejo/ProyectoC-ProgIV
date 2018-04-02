#include "Tarjeta.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NUM 1

void clearifneeded (char* str, FILE* fd);

void AltaTarjeta (t_tarjeta *t)
{

	int numTarjeta;
	int PIN;
	int saldo = 0;

	FILE* fd;
	printf("Registra el numero de tu nueva tarjeta \n");
	scanf ("%d", &numTarjeta);

	printf("Introduce el PIN para completar el registro de tu nueva tarjeta \n");
	scanf ("%d", &PIN);
	
	fd = fopen("registro.dat", "r+b");

	(*t).numTarjeta = numTarjeta;
	(*t).Password = PIN;
	(*t).Saldo = saldo;

	fputc(MAX_NUM, fd);

	fwrite(t, sizeof(t_tarjeta), MAX_NUM, fd);

	fclose(fd);
}

void VerificarTarjeta(t_tarjeta *t)
{
  FILE * fd;
  int numTarjeta;	
  int FilasFichero;
  int i;

  fd = fopen("registro.dat", "rb");
	
  //leer la cantidad de elementos
  FilasFichero = fgetc(fd);
  
  printf("Introduce el numero de la tarjeta: \n");
  scanf ("%i", &numTarjeta);

  //crear memoria para guardar los datos
  t = (t_tarjeta*)malloc(FilasFichero * sizeof(t_tarjeta));	
  
  fread(t, sizeof(t_tarjeta), FilasFichero, fd);
 
  	if((*t).numTarjeta == numTarjeta)
  	{
  	//leer los datos binarios al array
  	printf("La tarjeta %i se encuentra en nuestros servidores\n", numTarjeta);

  	//VERIFICAR PIN AQUI
  	//print(&t);
  	}
  	else if((*t).numTarjeta != numTarjeta)
  	{
  	printf("La tarjeta %i no pertenece a nuestro banco\n", numTarjeta);
  	}
  //cerrar el fichero
  fclose(fd);

  //liberar
  free(t);
}


void ConsultarSaldo(t_tarjeta *t)
{

}
void Salir()
{

}
void clearifneeded (char* str, FILE* fd)
{
	if (str [strlen (str) - 1] != '\n')
	{
		int c;
		while ((c = fgetc (fd)) != EOF && c != '\n');
	}
}
/*
void print (t_tarjeta *t)
{
	printf("(%i, %i, %i)", p->numTarjeta, p->PIN, p->saldo);
}
*/
