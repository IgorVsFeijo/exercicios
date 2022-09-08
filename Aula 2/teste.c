#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void mostrar(float *po, int tam);
void inserir(float *po, int tam);

int main (){
    float *temp = NULL;
    float **pp;
    int tamanho;

    printf("\nTestando Alocação Dinâmica\n\n");

    printf("\nInsira o tamanho do vetor que deseja adicionar:");
    scanf("%i", &tamanho);

    temp = (float*)realloc(temp, tamanho*sizeof(float));

    if((temp = (float*) realloc(temp, tamanho*sizeof(float))) == NULL) printf("\nErro");

    inserir(temp, tamanho);

    mostrar(temp, tamanho);
}

void inserir(float *po, int tam){
    float *pv = po;
    int i;
    printf("\nInserindo os elementos do Vetor...\n\n");
    for(i = 0; i < tam; i++, pv++){
        printf("\nPor favor, insira o elemento %d", i);
        scanf("%f", pv);
    }
}

void mostrar(float *po, int tam){
    float *pv = po;
    int i;
    system("cls");
    printf("Mostrando o vetor formado...");
    for(i = 0; i < tam; i++, pv++){
        printf("\nElemento[%i]:%.2f", i, *pv);
    }
}