#include <stdlib.h>
#include <stdio.h>
#include <locale.h>



void mostrarMaior (float *pm, int *diasdmt, int nur);
void inserir (float *po, int tam);
int maior(float *po, int tam, float *pm, int *diasdmt, int *dmt);

int main (){
    setlocale(LC_ALL, "Portuguese");

    int tamanho, maiorTemp, ldmt, daymt, nr;
    float *temp = NULL;

    printf("\nPor favor, insira a quantidade de dias que vão ser registrados:");
    scanf("%i", &tamanho);

    temp = (float*)realloc(temp, tamanho*sizeof(float));
    if((temp = (float*)realloc(temp,tamanho*sizeof(float))) == NULL){
        printf("\nErro\n");
        exit(0);
    }

    inserir(temp, tamanho);
    nr = maior(temp, tamanho, maiorTemp, ldmt, daymt);
    if (nr > 0)
    mostrarMaior(&maiorTemp, &ldmt, nr);
    else 
    mostrarMaior(&maiorTemp, &daymt, nr);

    return 0;
}

void inserir (float *po, int tam){
    float *p = po;
    int i;

    printf("\nRegistrando temperaturas...\n");

    for(i = 1; i <= tam; i++, p++){
        printf("\nDia %i:", i);
        scanf("%f", p);
    }
}

int maior(float *po, int tam, float *pm, int *diasdmt, int *dmt){
    float *p1 = po;
    float *p2 = po;
    int *pp;
    int x, y, mi = -1, i, guardar, tr; 
    diasdmt = NULL;

    for(x = 1; x <= tam; x++, p1++){ //Ponteiro principal, que analisará cada elemento do vetor, afim de descobrir qual elemento é igual ou maior ao tamanho do vetor
        for(y = 1; y <= tam; y++, p2++){ //Ponteiro auxiliar, que compara o elemento para qual o ponteiro principal aponta com todos os demais elementos do vetor; 
            if(*p1 <= *p2) mi++; //Contador Maior Igual
            if(*p1 == *p2) i++; //Contador Igual
            if(mi == tam){ //Se o contador mi for igual ao tamanho total do vetor achamos a maior temperatura
                *pm = *p1; //Guarda o endereço da maior temperatura
                *dmt = x; //Guarda o dia da maior temperatura

                if(i > 0) { //Se houver dias de mesma temperatura;
                    if(diasdmt == NULL){ //Se a o vetor não tiver criado 
                        if((diasdmt = (int*)realloc(diasdmt, i*sizeof(int))) == NULL) printf("\nErro na alocação\n"); //Cria-se um vetor para guardar os dias de maior temperatura
                        *diasdmt = *dmt; //Atribui-se ao primeiro elemento do vetor o primeiro dia registrado;
                        tr = i; //Representa o quanto falta da lista para ser completada
                        guardar = tr; 
                        }

                    else{
                        pp = diasdmt; //Ponteiro para o começo da matriz de dia de maior temperatura
                        do{
                            pp++; //Avança Ponteiro para a proxima posição
                            i--;
                        } while(i >= tr); //Enquanto o i for maior ou igual aos itens faltantes na lista o ponteiro avança mais uma posição 

                        *pp = *dmt; //A variável float para qual o ponteiro está apontando é preenchida pelo dia
                        tr--; //Um item a menos para ser preenchido na lista
                    }
                }
            }
        }
            
    }

    return guardar; //retorna o numero de vezes que a maior temperatura se repete
    
    }


void mostrarMaior (float *pm, int *diasdmt, int nur){
    int i;

    system("cls");
    printf("Mostrando maiores temperaturas registradas...\n\n");
    
    printf("Maior temperatura: %.2f", *pm);

    if(nur > 0){
        printf("\nDias registrados: ");
        for(i = 0; i < nur; i++, diasdmt++){
            printf("Dia %i, ", *diasdmt);
        }
    }
}