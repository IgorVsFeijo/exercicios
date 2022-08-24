#include <stdlib.h>
#include <stdio.h>

int num[5];
void recebe(int *p, int cont);
void mostra(int *p, int cont);

int main(){

    int qtd;

    do {
        system("cls");
        printf("Por favor, escolha o número de elementos, de 1 a 5");
        scanf("%d", &qtd);
    } while(qtd < 0 || qtd > 5);
    
    recebe(num, qtd);
    mostra(num, qtd);
}

void recebe(int *p, int cont){
    
    int d = 0;

    system("cls");

    printf("Inserindo elementos na matriz\n\n");
    for(d = 0; d < cont; d++){
        printf("\nPor favor, insira o elemento %d: ", d);
        scanf("%d", p);
        p++;
    }
}

void mostra (int *p, int cont){
    int d = 0;

    system("cls");

    printf("Lendo os elementos de uma matriz\n\n");
    for(d = 0; d < cont; d++){
        printf("\nElemento %d: %d", d, *p);
        p++;
    }
}