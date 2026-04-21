#include <stdio.h>
#include <stdlib.h>

int vetor[5];

int main()
{
    for (int i = 0; i < 5; i++)
        vetor[i] = 1;

    for (int i = 0; i < 5; i++)
        printf("%d", vetor[i]);
    return 0;
}