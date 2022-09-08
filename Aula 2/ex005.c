#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int maior (float *pv, int tamanho);
void inserir (float *pv, int tamanho);

int main(){
    float v[10], *pm;
    int qtd;

    do{
        printf("\nInsira o tamanho do seu vetor: ");
        scanf("%d", &qtd);
    } while (qtd < 0 || qtd > 10);

    inserir(v, qtd);
    pm = maior(v, qtd);

    printf("\nO maior valor e: %.2f", *pm);
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

int maior (float *pv, int tamanho){
    int i;
    float *m;
    m = pv;

    system("cls");
    printf("Descobrindo o maior valor...");

    for(i=0; i < tamanho; i++, pv++){
        if(*pv > *m) m = pv; 
    }

    return m;
}