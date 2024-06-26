#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char *TiposProductos[] = {"Galletas", "Snack", "Cigarrillos", "Caramelos", "Bebidas"};

struct Producto {
    int ProductoID;       //Numerado en ciclo iterativo
    int Cantidad;         // entre 1 y 10
    char *TipoProducto;   // Algún valor del arreglo TiposProductos
    float PrecioUnitario; // entre 10 - 100
};

struct Cliente {
    int ClienteID;                // Numerado en el ciclo iterativo
    char *NombreCliente;          // Ingresado por usuario
    int CantidadProductosAPedir;  // (aleatorio entre 1 y 5)
    struct Producto *Productos    //El tamaño de este arreglo depende de la variable "CantidadProductosAPedir"
};

int main()
{
    return 0;
}