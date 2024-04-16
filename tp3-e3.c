#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main()
{
    char Buffer[100];
    char *nombre1, *nombre2, *nombre3, *nombre4, *nombre5;
    int tamano;

    for (int i = 0; i < 5; i++)
    {
        printf("Escriba un nombre: ");
        gets(Buffer);

        tamano = strlen(Buffer) + 1;
        switch (i)
        {
            case 0:
                nombre1 = (char *) malloc(tamano * sizeof(char));
                strcpy(nombre1, Buffer);
                break;
            case 1:
                nombre2 = (char *) malloc(tamano * sizeof(char));
                strcpy(nombre2, Buffer);
                break;
            case 2:
                nombre3 = (char *) malloc(tamano * sizeof(char));
                strcpy(nombre3, Buffer);
                break;
            case 3:
                nombre4 = (char *) malloc(tamano * sizeof(char));
                strcpy(nombre4, Buffer);
                break;
            case 4:
                nombre5 = (char *) malloc(tamano * sizeof(char));
                strcpy(nombre5, Buffer);
        }
    }

    printf("\nNOMBRES:\n");
    puts(nombre1);
    puts(nombre2);
    puts(nombre3);
    puts(nombre4);
    puts(nombre5);

    free(nombre1);
    free(nombre2);
    free(nombre3);
    free(nombre4);
    free(nombre5);

    return 0;
}