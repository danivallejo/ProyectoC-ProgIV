#include "Tarjeta.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define NUM 1

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

	fd = fopen("registro.dat", "wb");

	(*t).numTarjeta = numTarjeta;
	(*t).Password = PIN;
	(*t).Saldo = saldo;

	fputc(NUM, fd);

	fwrite(t, sizeof(t_tarjeta), NUM, fd);

	//fclose(fd);
}

void VerificarTarjeta(t_tarjeta *t)
{
  FILE * fd;
  int numTarjeta;	
  int num;
  int i;
  char *w;

  fd = fopen("registro.dat", "rb");
	
  //leer la cantidad de elementos
  num = fgetc(fd);
  
  printf("Introduce el numero de la tarjeta \n");
  scanf ("%d", &numTarjeta);

  //crear memoria para guardar los datos
  t = (t_tarjeta*)malloc(NUM * sizeof(t_tarjeta));	
  
  if(numTarjeta = (*t).numTarjeta)
  {
  //leer los datos binarios al array
  fread(t, sizeof(t_tarjeta), NUM, fd);
  printf("La tarjeta %d se encuentra en nuestros servidores\n", numTarjeta);
  }
  //imprimir los puntos
  //for (i = 0; i < num; i++)
    //{
      //print(&t[i]);
      //printf("\n");
    //}

  //leer la longitud de la cadena de char
  //num = fgetc(fd);
  //reservar memoria
  //w = (char*)malloc((num + 1) * sizeof(char));
  //leer los datos de la cadena
  //fread(w, sizeof(char), num, file);
  //poner el \0 que falta
  //w[num] = '\0';

  //cerrar el fichero
  fclose(fd);

  //imprimir la cadena
  //printf("%s\n", w);

  //liberar
  free(t);
  //free(w);	

   //return 0;
}
 
	/*FILE* fd;

	int num_lines = 0;
	char c;

	fd = fopen("registro.dat", "rb");

	if (fd == NULL)
	{
		printf ("Archivo no encontrado \n");
		//return -1;
	}

	char str [40];

	const char s[2] = ",";

	char * token;

	while (c = fgetc(fd) != EOF)
	{
		if (c == '\n')
			num_lines++;
	}

	t = (t_tarjeta*) malloc (num_lines * sizeof (t_tarjeta));

	while (fgets(str, 20, fd))
	{
		int d;
		sscanf(str, "%d", &d);

		if(numTarjeta != d)
		{
		printf("La tarjeta introducida es erronea: %d\n", numTarjeta);
		break;
		}
		else if(numTarjeta = d)
		{
		token  = strtok (str, s);
		printf("Tarjeta valida: %d\n. Verificar contrasenya.", numTarjeta);
		}	
	
	clearifneeded(str, fd);
	}
	//return 0;
}
*/
void VerificarContrasenya(t_tarjeta *t)
{
/*	int PIN;

	FILE* fd;
	
	printf("Introduce el PIN: ");

	scanf("%d", PIN);

	fd = fopen("registro.txt", "r");

	if (fd == NULL)
	{
		printf ("Archivo no encontrado \n");
		//return -1;
	}

	char str [20];
	const char s[2] = ",";
	
	char * token;

	//token  = strtok (str, s);


	while (fgets(str, 20, fd))
	{
		int d;
		sscanf(str, "%d", &d);

	
		while (token != NULL)
		{
			if (token = PIN)
			{
			printf ( "%s\n", token);
			token = strtok (NULL, s - 1);
			}
		}

	}	
	clearifneeded(str, fd);

*/
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

