#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void aloca(int **p, int tam);
void leitura(int *p);

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int *vetor = NULL, cont;
	char op;
	
	cont = 0;
	
	do{
		
		aloca(&vetor, cont+1);
		leitura(vetor+cont);
		
		cont++;
		printf("Deseja continuar? (S / N)");
		scanf("%c", &op);
		fflush(stdin);
		
		
	} while( op != 'n');
	
	mostra(vetor, cont);

	return 0;
}

void aloca(int **p, int tam){
	
	if((*p =(int *)realloc(*p,tam * sizeof(int)))==NULL)
	{
		printf("Erro na alocação Dinâmica");
		exit (1);
	}
}

void leitura(int *p){
	
	printf("\nEndereço %u - Numero: ", p);
	scanf("%i", p);
	fflush(stdin);
	printf("%i\n", *p);
	
}

void mostra(int *p, int tam){
	
	int i;
	
	for(i = 0; i < tam; i++, p++){
		printf("\n\nEndereço %u - Numero: %i\n", p, *p);
	}
}