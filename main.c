#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Pedro Antonio Estévez Pérez

//Ejercicio 8

/* Realiza un programa que pida por teclado el tamaño de un vector y que almacene en él
 * números enteros aleatorios. Para recorrer el vector se pide utilizar punteros en
 * lugar de índices.
 * Nota: el vector se crea en tiempo de ejecución, con el tamaño que el usuario ha elegido.*/

int main(void)
{
    int longitud,i;

    while (1)
    {
        printf("Introduce la longitud del vector: ");
        scanf("%d", &longitud);
        if (longitud <= 0)
            printf("Introduce una longitud valida.\n");
        else
            break;
    }

    /* La funcion rand(), crea un valor aleatorio con el limite superior RAND_MAX, 32767. 2^15. 2 bytes.
     * Si ponemos %n, el limite superior pasará a ser n.*/

    /* Creamos el vector, creamos el puntero, le digo al puntero que comience en el
     * primer valor del vector, y a partir de ahí, solo ir sumando 1 para avanzar en
     * la posicion de memoria e ir introduciendo los valores aleatorios.*/

    int vector[longitud]; //Creamos el vector
    int *pvector;         //Creamos el puntero
    pvector = &vector[0]; //Los relaciono

    srand(time(NULL)); //Inicializamos la semilla con los segundos del ordenador (1 enero 1970?)
    printf("[ ");
    for (i=0; i<longitud; i++)
    {
        *(pvector+i)=rand()%100; //Ponemos un máximo de 100 por comodidad de lectura
        printf("%d ",*(pvector+i));
    }
    printf("]\n\n");
}
