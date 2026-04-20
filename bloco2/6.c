#include <stdio.h>
#include <stdio.h>

int tempereaturas[24] = {15, 15, 12, 11, 13, 15, 16, 16, 16, 16, 17, 18, 20, 21, 20, 20, 20, 20, 17, 15, 15, 15, 14, 14};

void encontraMaiorMenor(int *vetor);

int main()
{
    encontraMaiorMenor(tempereaturas);
}

void encontraMaiorMenor(int *vetor)
{
    int ma =-30000, me = 30000;

    for (int i = 0; i < 24; i++)
    {
        if (vetor[i] > ma)
            ma = vetor[i];

        if (vetor[i] < me)
            me = vetor[i];
    }

    printf("menor valor encontrado: %d\n",me);
    printf("menor valor encontrado: %d\n",ma);

}
