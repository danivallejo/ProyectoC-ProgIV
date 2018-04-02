#include "Tarjeta.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NUM 1

void clearifneeded (char* str, FILE* fd);

void AltaTarjeta (t_tarjeta *t)
{

	char numTarjeta[10];
	int PIN;
	int saldo = 0;

	FILE* fd;
	printf("Registra el numero de tu nueva tarjeta \n");
	scanf ("%s", &numTarjeta);

	printf("Introduce el PIN para completar el registro de tu nueva tarjeta \n");
	scanf ("%d", &PIN);
	
	fd = fopen("registro.dat", "r+b");

	(*t).numTarjeta[11] = numTarjeta[10];
	(*t).Password = PIN;
	(*t).Saldo = saldo;

	fputc(MAX_NUM, fd);

	fwrite(t, sizeof(t_tarjeta), MAX_NUM, fd);

	fclose(fd);
}

void VerificarTarjeta(t_tarjeta *t)
{
  FILE * fd;
  char numTarjeta[10];	
  int FilasFichero;
  int i;

  fd = fopen("registro.dat", "rb");
	
  //leer la cantidad de elementos
  FilasFichero = fgetc(fd);
  
  printf("Introduce el numero de la tarjeta: \n");
  scanf ("%s", &numTarjeta);

  //crear memoria para guardar los datos
  t = (t_tarjeta*)malloc(FilasFichero * sizeof(t_tarjeta));	
  
 
  while (fgets((*t).numTarjeta, 11, fd))
  {
	fread(t, sizeof(t_tarjeta), FilasFichero, fd);

  	(*t).numTarjeta[strlen((*t).numTarjeta-1)] ='\n';
  	if(strcmp((*t).numTarjeta, numTarjeta) == 0)
  	{
  	printf("La tarjeta %s se encuentra en nuestros servidores\n", numTarjeta);
  		//VERIFICAR PIN AQUI
  	}
  	else if(strcmp((*t).numTarjeta, numTarjeta) !=0)
  	{
  	printf("La tarjeta %s no pertenece a nuestro banco\n", numTarjeta);
  	}
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
		int c;		while ((c = fgetc (fd)) != EOF && c != '\n');
	}
}
/*
void print (t_tarjeta *t)
{
	printf("(%i, %i, %i)", p->numTarjeta, p->PIN, p->saldo);
}
*/
