#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

float consumoMedio (float kilometros, float volume);                 

int main(){
    system("chcp 65001");
    setlocale(LC_ALL, NULL);

    float km, l, media;

    printf("\nPor favor, insira a distância percorrida em kilômetros: ");
    scanf("%f", &km);

    printf("\nAgora, digite o volume em litros de combustível gasto no percurso: ");
    scanf("%f", &l);

    media = consumoMedio(km, l);

    printf("\n\nO consumo médio de gasolina foi de %.2f litros por kilômetro rodado.\n", media);

    getch();   
    return 0;
}

float consumoMedio (float kilometros, float volume){
    float media;
    media = volume/kilometros;
    return media;
}