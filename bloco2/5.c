#include <stdio.h>
#include <stdio.h>

int tempNoIndice(int *vetor, int hora);
int existeTemperatura(int *vetor, int i);

int tempereaturas[24] = {15, 15, 12, 11, 13, 15, 16, 16, 16, 16, 17, 18, 20, 21, 20, 20, 20, 20, 17, 15, 15, 15, 14, 14};

int main()
{
    int temperatura;
    printf("encontra a temperatura ");
    scanf("%d", &temperatura);

    int horaTemp = existeTemperatura(tempereaturas, temperatura);
    
    if(horaTemp<0){
        printf("Nao ocorreu essa temperatura nas 24 horas do vetor");
        return 0;
    }

    printf("a temperatura %d aconteceu as %d hora(s)", temperatura, horaTemp);


}

int tempNoIndice(int *vetor, int i)
{
    return vetor[i];
}

int existeTemperatura(int *vetor, int i)
{
    int j = 0;
    while (vetor[j] != i&&j<24)
        j++;

    if (j == 24)
        return -1;
    
        return j;
}