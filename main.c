#include <stdio.h>
#include "funciones.h"

int main(void)
{
    articulos_t articulos[CANT_ARTICULOS] = {0};

    printf("Bienvenido al final de Info 1\n\n");

    cargarArt(articulos);	//Carga de articulos
    mostrarArt(articulos);	//Impresion de lista de articulos
    ordenarArt(articulos);	//Ordenamiento
	
    printf("\n#############ORDENADO##############\n\n");
  
    mostrarArt(articulos);	//Impresion de lista ordenada
	
    return 0;
}
