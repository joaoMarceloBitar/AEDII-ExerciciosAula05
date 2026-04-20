#include <stdio.h>
#include <stdlib.h>

void insereNoInicio(char *vetor[], char *paciente);
void removerDaPosicao(char *vetor[], int indice);

char *vetorPaciente[10] = {NULL};
int main()
{

    insereNoInicio(vetorPaciente, "joao");
    insereNoInicio(vetorPaciente, "marcelo");
    insereNoInicio(vetorPaciente, "bitar");
    insereNoInicio(vetorPaciente, "duarte");
    insereNoInicio(vetorPaciente, "pablo");
    insereNoInicio(vetorPaciente, "chiaro");
    insereNoInicio(vetorPaciente, "rosa");
    insereNoInicio(vetorPaciente, "joao");
    insereNoInicio(vetorPaciente, "marcelo");
    insereNoInicio(vetorPaciente, "marcelo");
    insereNoInicio(vetorPaciente, "roberto");
    insereNoInicio(vetorPaciente, "alceu");
    
    for (int i = 0; i < 10; i++)
    {
        printf("%d,%s\n", i, vetorPaciente[i]);
    }
    
    removerDaPosicao(vetorPaciente, 4);

    for (int i = 0; i < 10; i++)
    {
        printf("%d,%s\n", i, vetorPaciente[i]);
    }
    return 0;
}
void insereNoInicio(char *vetor[], char *paciente)
{
    int i = 9;
    while (i > 0)
    {
        if (vetor[i - 1] != NULL)
        {
            vetor[i] = vetor[i - 1];
        }
        i--;
    }
    vetor[0] = paciente;
}

void removerDaPosicao(char *vetor[], int indice)
{
    printf("removendo %s", vetor[indice]);
    if (vetor[indice + 1] == NULL)
    {
        vetor[indice] = NULL;
        return;
    }
    int i = indice;
    while (i < 9 && vetor[i]!=NULL)
    {
        if (vetor[i+1] != NULL)
        {
            vetor[i] = vetor[i + 1];
        }
        i++;
    }
    vetor[9]=NULL;
}