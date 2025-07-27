#include <stdio.h>

int metafora();

int main()
{
    int a = 1;
    int b = 2;
    int c = 3;

    printf("\na = %d\nb = %d\nc = %d\n\n", a, b, c);
    metafora(&a, &b, &c);
    printf("a = %d\nb = %d\nc = %d\n\n", a, b, c);

    return 0;
}

int metafora(int *x, int *y, int *z)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = *z;
    *z = temp;

    return *x, *y, *z;
}