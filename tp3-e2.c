#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define F 5
#define C 12

int mostrarMatriz(int matriz[][C]);

int main()
{
    int produccion[F][C];

    srand(time(NULL));
    for (int i = 0; i < F; i++)
    {
        for (int j = 0; j < C; j++)
        {
            // A cada elemento de la matriz le asigno un numero aleatorio del rango 10000-50000
            produccion[i][j] = rand() % (50000 - 10000 + 1) + 10000;
        }
    }
    mostrarMatriz(produccion);

    float promedio;
    // defino e inicializo las variables relacionadas al maximo y minimo con el primer elemento de la matriz
    int minimo, maximo;
    minimo = maximo = produccion[0][0];
    int minimo_anio, minimo_mes, maximo_anio, maximo_mes;
    minimo_anio = minimo_mes = maximo_anio = maximo_mes = 1;

    for (int i = 0; i < F; i++)
    {
        // Inicializo el promedio en 0 para poder sumar consecutivamente los valores de la matriz
        promedio = 0;
        for (int j = 0; j < C; j++)
        {
            promedio += produccion[i][j];
            if (produccion[i][j] > maximo)
            {
                maximo = produccion[i][j];
                // Guardo el año y el mes del maximo
                // Año es num natural que toma valores 1-5, por lo tanto le sumo 1 al indice
                // Idem con el mes
                maximo_anio = i + 1;
                maximo_mes = j + 1;
            }
            else if (produccion[i][j] < minimo)
            {
                minimo = produccion[i][j];
                // Guardo el año y el mes del minimo
                // Año es num natural que toma valores 1-5, por lo tanto le sumo 1 al indice
                // Idem con el mes
                minimo_anio = i + 1;
                minimo_mes = j + 1;
            }
        }
        promedio /= C;
        printf("\nEl promedio de la produccion en el anio %d es: %.2f", i + 1, promedio);
    }

    printf("\n\nEl valor MINIMO es: %d. Anio: %d. Mes: %d", minimo, minimo_anio, minimo_mes);
    printf("\nEl valor MAXIMO es: %d. Anio: %d. Mes: %d", maximo, maximo_anio, maximo_mes);

    return 0;
}

int mostrarMatriz(int matriz[][C])
{
    for (int i = 0; i < F; i++)
    {
        for (int j = 0; j < C; j++)
        {
            printf("%7d", matriz[i][j]);
        }
        printf("\n");
    }
}