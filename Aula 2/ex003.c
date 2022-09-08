#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void inserir(float *p, int tamanho);
void somar (float *pa, float *pb, float *pc, int tamaho);

int main(){
    setlocale(LC_ALL, "Portuguese");

    float a[100], b[100], c[100];
    int qtd;


    do
    {
        printf("Por favor, insira o tamanho do Vetor");
    scanf("%d", &qtd);

    } while (qtd > 100 || qtd < 0);

    inserir(a, qtd);
    inserir(b, qtd);

    somar(a, b, c, qtd);

    somar(a, b, c, qtd);

    system("pause");
    
}

void inserir(float *p, int tamanho){
    int i;

    system("cls");
    printf("Inserindo elementos no Vetor...\n\n");
    for(i = 0; i < tamanho; i++, p++){
        printf("\nPor favor, insira o elemento %d", i);
        scanf("%f", p);
    }
}

void somar (float *pa, float *pb, float *pc, int tamanho){
    int i;

    system("cls");
    printf("Somando vetores...\n\n");
    for(i = 0; i < tamanho; i++, pa++, pb++, pc++){
        *pc = *pa + *pb;
        printf("%.2f + %.2f = %.2f\n", *pa, *pb, *pc);
    }
}