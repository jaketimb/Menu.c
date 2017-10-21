/*@brief: Este programa permite crear un menú con diferentes
          opciones
@date: 20/10/12017
@autor:Antonio Durán
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int menu(void);

int main(void)
{
  int eleccion;
  do{
  eleccion = menu();
  switch(eleccion)
    {

    case 1:

      printf("Ingresa tu usern@me:");
      break;

    case 2:

      printf("Ingresa tu ID@dministrador:");
      break;

    case 3:

      printf("Encuentra E&P te ayuda a encontrar parquimetros o estacionamientos en la CDMX solo tienes que registrarte y listo");

    default:
      printf("\n\nEstamos felices de ayudarte :)\n");
    }
  }while(eleccion != 4);

  return 0;
}

int menu(void)
{
  int eleccion;

    do
      {
	printf("\nBienvenido a Encuentra E&P\n\nMenú Principal:\n");
	printf("1 - Usuario\n");
	printf("2 - Administrador\n");
	printf("3 - Ayuda\n");
	printf("4 - Salir\n");
	printf("Por favor, Elige tu opción  (1,2,3 ó 4) ->");
	scanf("%d",&eleccion);
	if(eleccion < 1 || eleccion > 4)
	  printf("\nERROR - Por favor, inténtelo de nuevo\n");
      }	while (eleccion < 1 || eleccion > 4);
	printf("\n");
	return (eleccion);

}
