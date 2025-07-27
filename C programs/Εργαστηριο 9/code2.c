#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 3
#define M 5

int main()
{
    int i, j;
    float **Pinakas;

    srand(time(NULL));

    int size = N * sizeof(int);
    Pinakas = malloc(size);

    for(i=0; i<N; i++)
    {
        size = M * sizeof(float);
        Pinakas[i] = malloc(size);
    }

    for(i=0; i<N; i++)
    {
        for(j=0; j<M; j++)
        {
            Pinakas[i][j] = rand() % size;
            printf("%10.2f", Pinakas[i][j]);
        }
        printf("\n");
    }

    return 0;
}