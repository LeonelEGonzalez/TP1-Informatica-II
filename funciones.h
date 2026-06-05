#ifndef FUNCIONES_H
#define FUNCIONES_H

#define CANT_ARTICULOS 60
#define SUCURSAL_1 0
#define SUCURSAL_2 1
#define SUCURSAL_3 2

typedef struct
{
    char descripcion[90];
    int cantidad_sucursal[3];
    int total;
} articulos_t;

void cargarArt(articulos_t articulos[]);
void mostrarArt(articulos_t articulos[]);
void ordenarArt(articulos_t articulos[]);

#endif
