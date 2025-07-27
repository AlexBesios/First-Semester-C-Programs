#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void checknum_print();

int main()
{
    int i, N = 100;
    int *pinakas;
    int input;

    srand(time(NULL));

    int size = N * sizeof(int);
    pinakas = malloc(size);

    for(i=0; i<N; i++)
    {
        pinakas[i] = rand() % N;
        printf("%d ", pinakas[i]);
    }

    printf("Give me a number: ");
    scanf("%d", &input);

    return 0;
}

void checknum_print(int input)
{
    //DEN TELEIWSA AKOMA TON CODE   
}