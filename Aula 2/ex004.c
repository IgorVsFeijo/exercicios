#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

media(float *p1, float *p2, float*p3, int tamanho);
inserir(float *p1, float *p2, int tamanho);

int main(){
    setlocale(LC_ALL, "Portuguese");

    float n1[100], n2[100], nf[100];
    int qtd;

    do
    {
        printf("Por favor, insira o número de alunos: ");
        scanf("%d", &qtd);
    } while (qtd < 0, qtd > 100);

    inserir(n1, n2, qtd);

    media(n1, n2, nf, qtd);
    
}

inserir(float *p1, float *p2, int tamanho){
    int i;
    for(i = 0; i < tamanho; i++, p1++, p2++){
        system("cls");
        printf("Inserindo notas...\n\n");
        printf("Aluno %d\n", i+1);

        do{
            printf("\nInsira a primeira nota: ");
            scanf("%f", p1);
        }while(*p1 < 0 || *p1 > 10);

        do{
            printf("\nInsira a segunda nota: ");
            scanf("%f", p2);
        }while(*p2 < 0 || *p2 > 10);
    }
}

media(float *p1, float *p2, float*p3, int tamanho){
    int i;
    system("cls");
    for(i = 0; i < tamanho; i++, p1++, p2++, p3++){
        printf("Aluno %d\n\n", i+1);
        *p3 = (*p1+*p2)/2;

        printf("Nota 1: %.2f\nNota2: %.2f\nMedia: %.2f\n", *p1, *p2, *p3);

        if(*p3 >= 7) printf("APROVADO\n\n");
        if(*p3 >=4 && *p3 < 7) printf("EXAME\n\n");
        if(*p3 < 4) printf("REPROVADO\n\n");
        
    }
}