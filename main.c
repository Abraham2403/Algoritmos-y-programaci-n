#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x =42;
    int *ptr = &x;
printf("valor de x: %d\n", x);
printf("Valor el que apunta prt: %d\n", *ptr);
*ptr = 100; //Modificamos el valor de x a traves del puntero
printf("nuevo valor de x: %d\n", x);

    return 0;
}
