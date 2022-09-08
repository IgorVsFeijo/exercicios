#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

float media (float *pv, int tamanho);
void inserir (float *pv, int tamanho);

int main(){
    float v[10], m;
    int qtd;

    do{
        printf("\nInsira o tamanho do seu vetor: ");
        scanf("%d", &qtd);
    } while (qtd < 0 || qtd > 10);

    inserir(v, qtd);
    m = media(v, qtd);

    printf("\nMedia = %.2f", m);
}

void inserir (float *pv, int tamanho){
    int i;
    
    system("cls");
    printf("Lendo elementos do Vetor...\n\n");

    for(i=0; i < tamanho; i++, pv++)
    {
        printf("Insira o elemento %d:\n", i);
        scanf("%f", pv);
    }
}

float media (float *pv, int tamanho){
    int i;
    float soma, resultado;

    for(i=0; i < tamanho; i++, pv++){
        soma+=*pv;
    }

    resultado = soma/tamanho;

    return resultado;
}