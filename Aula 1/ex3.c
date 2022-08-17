#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main (){
    system("chcp 65001");
    setlocale(LC_ALL, NULL);
    int i, m, d;

    printf("Por favor, digite sua idade: ");
    scanf("%d", &i);

    m = calcularMeses(i);
    d = calcularDias (m);

    printf("\nVocê já viveu aproximadente %d meses ou %d dias\n\n", m, d);

    system("PAUSE");
    return 0;

    }

int calcularMeses (int idade){
    int meses;
    meses = idade*12;
    return meses;
}

int calcularDias (int meses){
    int dias;
    dias = meses*30.4166667;
    return dias;
}