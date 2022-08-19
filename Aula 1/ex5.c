#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

float areaEsfera (float raio);

int main (){
    setlocale(LC_ALL, NULL);
    system("chcp 65001");

    float r, area;

    printf("\nPor favor, insira o raio da esfera: ");
    scanf("%f", &r);
    
    area = areaEsfera(r);

    printf("\nA área da sua esfera é de %.2f", area);

}

float areaEsfera (float raio){
    float area;
    area = 4 * 3.141592 * raio * raio;
    return area;
}