#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **a;
    a = (int**)malloc(1000*sizeof(int*));
    int i, j, sum = 0;
    for(i = 0; i < 1000; i++)
    a[i] = (int*)malloc(1000*sizeof(int));
    for(i = 0; i < 1000; i++)
    for(j = 0; j < 1000; j++)
    {
        a[i][j] = (i + 1) * (j + 1);
        sum = sum+ a[i][j];
    }
    free(a);
    printf("%i", sum);
    return 0;
}

