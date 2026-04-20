#include <stdio.h>
#include <stdlib.h>

void insereNoInicio(char* vetor[], char* paciente);

char* vetorPaciente[10] = {NULL};
int main(){
    
    insereNoInicio(vetorPaciente,"joao");
    insereNoInicio(vetorPaciente,"marcelo");
    insereNoInicio(vetorPaciente,"bitar");
    insereNoInicio(vetorPaciente,"duarte");
    insereNoInicio(vetorPaciente,"pablo");
    insereNoInicio(vetorPaciente,"chiaro");
    insereNoInicio(vetorPaciente,"rosa");
    insereNoInicio(vetorPaciente,"joao");
    insereNoInicio(vetorPaciente,"marcelo");
    insereNoInicio(vetorPaciente,"marcelo");
    insereNoInicio(vetorPaciente,"roberto");
    insereNoInicio(vetorPaciente,"alceu");

    for(int i=0;i<10;i++){
        printf("%d,%s\n",i,vetorPaciente[i]);
    }
    
    return 0;
    
}
void insereNoInicio(char* vetor[], char* paciente){
    int i=9;
    while(i>0){
        if(vetor[i-1]!=NULL){
            vetor[i] = vetor[i-1];
        }
        i--;
    }
    vetor[0] = paciente;
}
