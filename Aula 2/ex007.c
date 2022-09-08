#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

float media (float *pv, int tamanho);
void ordenar(float *p1, int tamanho);

int main(){
    float v[10], m;
    int qtd;

    do{
        printf("\nInsira o tamanho do seu vetor: ");
        scanf("%d", &qtd);
    } while (qtd < 0 || qtd > 10);

    inserir(v, qtd);
    ordenar(v, qtd);

    system("pause");
    return 0;

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

void ordenar(float *p1, int tamanho){
    float *inicioVetor;
    inicioVetor = p1;
    float *p2; //Ponteiro para comparar um elemento com todos os demais do vetor
    float **p3; //Ponteiro para ler a lista de endereços
    float *listaEnd[10]; //Lista dos endereços ordenados por ordem crescente
    int x, y, z, c1, c2, me;

    for(x = 0; x < tamanho; x++, p1++){
        c1 = -1;
        p2 = inicioVetor;
        p3 = listaEnd;

        for(y = 0; y < tamanho; y++, p2++){
            if(*p1 > *p2) {p3++; printf("\nP3a++\n");}
            if(*p1 == *p2) {c1++; printf("\nC1a++\n");}
        }

            do{
            *p3 = p1; printf("\nElemento Atribuido\n");
            if(c1 >= 0) 
                {
                    p3++; printf("\nP3b++\n");
                    c1--; printf("\nC2b--\n"); 
                }
            } while (c1 >= 0);

    }

    //system("cls");

    p1 = inicioVetor;

    printf("Vetor = [");

    for(z = 0; z < tamanho; z++, p1++){
        printf(" %.2f, ", *p1);
    }

    printf("]\n\n");

    printf("Organizados de ordem crescente...\n\n");

    p3 = listaEnd;

    for(z = 0; z < tamanho; z++, p3++){
        printf(" %.2f, ", **p3);
    }
}