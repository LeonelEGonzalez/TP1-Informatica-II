#include <stdio.h>
#include <string.h>
#include "funciones.h"

void cargarArt(articulos_t articulos[])		//Carga de los articulos
{
  int opc = 0, i, articulo_index, sucursal;
  char articulo[90];
    
  do
  {
      printf("Ingrese la descripcion del articulo: ");
      scanf("%s", articulo);
      i = 0;  
    
      while(articulos[i].descripcion[0] && strcmp(articulo, articulos[i].descripcion))
      {
        i++;
      }
    
      articulo_index = i;
      strcpy(articulos[articulo_index].descripcion, articulo);
		
      do
      {
        printf("Para que sucursal va a realizar la carga? (1,2,3): ");
        scanf("%d",&sucursal);
      } while(sucursal < 1 || sucursal > 3);
		
      printf("Ingrese la cantidad del articulo para la sucursal %d: ", sucursal);
      scanf("%d", &articulos[articulo_index].cantidad_sucursal[sucursal - 1]);
      articulos[articulo_index].total = 0;
    
      for(i = 0; i < 3 ; i++)
      {
        articulos[articulo_index].total += articulos[articulo_index].cantidad_sucursal[i];
      }

      printf("Desea ingresar otro articulo? (1.Si, 2.No): ");
      scanf("%d", &opc);
      printf("\n");
  } while (opc == 1);
}


void mostrarArt(articulos_t articulos[])	//Impresion de la lista de articulos
{
  int i = 0;
  printf("Articulo\tSucursal 1\tSucursal 2\tSucursal 3\tTotal\n");

  while(i < CANT_ARTICULOS && articulos[i].descripcion[0])
  {
    printf("%s\t\t %d\t\t %d\t\t %d\t\t %d\n",
            articulos[i].descripcion,
            articulos[i].cantidad_sucursal[SUCURSAL_1],
            articulos[i].cantidad_sucursal[SUCURSAL_2],
            articulos[i].cantidad_sucursal[SUCURSAL_3],
            articulos[i].total);
    i++;
  }
}


void ordenarArt(articulos_t articulos[])	//Ordenamiento descendente por cant. total de art.
{
    int i,j;
    articulos_t aux;

    for(i = 0 ; i < CANT_ARTICULOS - 1 ; i++)
    {
        for(j = i + 1 ; j < CANT_ARTICULOS ; j++)
        {
          if(articulos[i].total < articulos[j].total)
          {
              aux = articulos[i];
              articulos[i] = articulos[j];
              articulos[j] = aux;
          }
        }
    }
}
