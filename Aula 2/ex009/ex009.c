#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

long int fatorial (long int a);
void inserir (long int *p, int tamanho);
void mostrarFatorial (long int *a, long int *b, int tamanho);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int qtd;
	long int a[15], b[15];
	
	do{
		printf("Por favor, insira o tamanho do Vetor [0-15]: ");
		scanf("%i", &qtd);
		printf("\n");
	} while(qtd < 0 || qtd > 15);
	
	inserir(a, qtd);
	mostrarFatorial (a, b, qtd);
	
	
	return 0;
}

void inserir (long int *p, int tamanho){
	
	int i;
	printf("\nInserindo os elementos do vetor...\n");
	for(i = 0; i <  tamanho; i++, p++){
		printf("\nElemento[%i]: ", i);
		scanf("%li", p);
	}
}

void mostrarFatorial (long int *a, long int *b, int tamanho){
	int i;
	printf("\nCriando vetor fatorial...\n");
	for(i = 0; i < tamanho; i++, a++, b++){
		
		*b = fatorial(*a);
		printf("\n%li! = %li", *a, *b);
	}
}

long int fatorial (long int a){
	long int i = a;
	long int resultado;
	resultado = a;
	
	i--;
	
	if(i!=0) resultado = resultado*fatorial(i);
	
	return resultado;
}
