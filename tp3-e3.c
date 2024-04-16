#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define MAX_CARACT 100
#define CANT_NOMBRES 5

int main()
{
    char Buffer[MAX_CARACT], *Nombres[CANT_NOMBRES];
    int tamano;

    for (int i = 0; i < CANT_NOMBRES; i++)
    {
        printf("Escriba un nombre: ");
        gets(Buffer);
        tamano = strlen(Buffer) + 1;
        Nombres[i] = (char *) malloc(tamano * sizeof(char));
        strcpy(Nombres[i], Buffer);
    }

    printf("\nNOMBRES:\n");
    for (int i = 0; i < CANT_NOMBRES; i++)
    {
        puts(Nombres[i]);
        free(Nombres[i]);
    }

    return 0;
}