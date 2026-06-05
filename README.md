# Trabajo Práctico N°1 - Informática II
> Alumno: Gonzalez Leonel Ezequiel

## Descripción general
Refactor del código original con la finalidad de mejorar la organización y legibilidad del mismo mediante el uso de estructuras, funciones y separación de archivos.

## Funcionamiento
Al inicializar se solicitará la descripción del artículo, la sucursal y la cantidad a registrar.
En cada carga se pedirá si se quiere ingresar otro articulo:

- Caso afirmativo, se permitirá cargar un nuevo artículo.
- Caso negativo, finalizará la carga de datos y mostrará por pantalla el listado de articulos ingresados.

Una vez finalizada la carga, el listado será ordenado en forma descendente según el total de unidades registradas y se volverá a mostrar por pantalla.

## Estructura del proyecto
El programa se divide en tres archivos:
- main.c : función principal del programa y llamada a las funciones.
- funciones.h : definición de la estructura, constantes y prototipos de las funciones.
- funciones.c : implementación de las funciones a utilizar.

## Funciones utilizadas
- cargarArt() : ingreso de artículos, sucursales y cantidades, calcula el total de unidades por articulo.
- mostrarArt() : muestra los artículos cargados, cantidades registradas por sucursal y su total.
- ordenarArt() : ordena los artículos en forma descendente según el total de unidades registradas.
