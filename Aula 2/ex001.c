#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void recebe(int *p);
void mostra(int *p);

int main(){

    setlocale(LC_ALL, "Portuguese");

    int num [5];

    recebe(num);
    mostra(num);
    
    }

void recebe (int *p){
    int d;

    printf("Lendo os números\n\n");

    for (d = 1; d <= 5; d++){

    printf("\n Por favor, insira o elemento %d", d);
    scanf("%d", p);

    p++;

    }
}

void mostra (int *p){
    int d;

    system("cls");

    printf("Imprimindo os números\n\n");

    for(d = 1; d <= 5; d++){
        printf("\nElemento %d: %d", d, *p);

        p++;
    }
}