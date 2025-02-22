#include <stdio.h>
#include <stdlib.h> //Aplicamos la Biblioteca

int main()
{
    int arr[5] = {1, 2, 3, 4, 5}; //Declaramos  e inicializamos las matrices
    int *p = arr; //Aqui con el puntero p apuntamos la matriz

    for (int i = 0; i < 5; i++) {                   //en esta parte con el bucle for se recorren los elementos de la matriz usando el puntero p
        printf("Elemento %d: %d\n", i, *(p + i)); //aqui accede al elemento i de la matriz arrr
        *(p + i) *= 2; //En esta parte se multiplico el valor del elemnto i por 2 i guarda el resultado de nuevo en la matriz.
    }

    printf("Matriz modificada:\n"); //aqui se imprime los elementos modificados de la matriz
    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: %d\n", i, arr[i]);//se imprime cada elemento junto con su indice
    }
    return 0;
}
