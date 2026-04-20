#include <stdio.h>
#include <stdio.h>

int tempNoIndice(int *vetor, int hora);


int tempereaturas[24] = {15,15,12,11,13,15,16,16,16,16,17,18,20,21,20,20,20,20,17,15,15,15,14,14};

int main()
{   
    int hora;
    printf("digita a hora agendadada");
    scanf("%d",&hora);

    int temperatura = tempNoIndice(tempereaturas,hora);
    printf("%d graus as %d hora(s)",temperatura,hora);
}   

int tempNoIndice(int *vetor, int i){
    return vetor[i];
}