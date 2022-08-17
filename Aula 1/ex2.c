#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

float calcularMedia (float nota1, float nota2);

int main (){
    system("chcp 65001");
    setlocale(LC_ALL, NULL);
    float n1, n2, media;

    printf("Por favor, insira a nota 1:");
    scanf("%f", &n1);
    printf("\nPor favor, insira a nota 2:");
    scanf("%f", &n2);

    media = calcularMedia(n1, n2);

    printf("\n\nA média das notas é: %.2f\n\n", media);

    return 0;
}

float calcularMedia(float nota1, float nota2){
    
    float notaFinal;
    notaFinal = (nota1 + nota2)/2;
    return notaFinal;
}