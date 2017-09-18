#include <stdio.h>
#include <stdlib.h>
#define N 1000

int main()
{
    int **a;
    a = (int**)malloc(N*sizeof(int*));
    // FIXIT: пробелы вокруг бинарных операторов N * sizeof(int*)
    int i, j, sum = 0;
    for(i = 0; i < N; i++)
    a[i] = (int*)malloc(N*sizeof(int));
    for(i = 0; i < N; i++)
    for(j = 0; j < N; j++)
    // FIXIT: вложенные циклы -> внутренний сдвинут на таб
    {
        a[i][j] = (i + 1) * (j + 1);
        sum = sum+ a[i][j];
    }
    free(a);
    // FIXIT: сколько malloc'ов столько должно быть и вызовов free
    printf("%i", sum);
    return 0;
}

