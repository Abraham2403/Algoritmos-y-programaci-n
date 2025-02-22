#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr;

    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: %d\n", i, *(p + i));
        *(p + i) *= 2;
    }

    printf("Matriz modificada:\n");
    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: %d\n", i, arr[i]);
    }

    return 0;
}
