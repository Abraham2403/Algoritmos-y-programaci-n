#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr; //ptr apunta el primer el elemento del arreglo
    printf("Primer elemento: %d\n", *ptr);
    ptr++; //Movemos el punterp al siguiente elemento
    printf("segundo elemento: %d\n", *ptr);
    ptr += 2; //movemos el punterdos posiciones adelante
    printf("cuarto elemento: %d\n", *ptr);

    return 0;
}
