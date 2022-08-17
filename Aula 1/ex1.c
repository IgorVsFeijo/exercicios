#include <stdio.h>
#include <stdlib.h>

float calculaSoma(float numero1, float numero2);
float n1, n2, resultado;

int main(){
    

    printf("Digite dois valores: ");
    scanf("%f %f", &n1, &n2);

    printf("Numeros %.2f %.2f\n", n1, n2);
    
    resultado = calculaSoma(n1, n2);

    printf("Resultado Final: %.2f", resultado);

    return 0;
}

float calculaSoma (float numero1, float numero2)
{
    float soma;
    soma = numero1+numero2;
    return soma;
}