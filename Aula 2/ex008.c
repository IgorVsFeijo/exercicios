#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void inserir(float *p, int tamanho);
int maior(float *p, int *d, int tamanho, float *maiorValor);
void mostrarMaior (float *maiorValor, int *lista, int repet);
float media (float *p, int tamanho);
int menorMedia(float *media, float *p, int tamanho, float *ptAdm, int *pdAdm);
void mostrarMm(float *ptAdm, int *pdAdm, int cont);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int qtd, nr, qtdDiaAdm; 
	float temp[31], tempAdm[31];
	int dr[31], dAdm[31];
	float mv, me;
	
	do{
		printf("Por favor, insira quantos dias serão analisados (1-31): ");
		scanf("%d", &qtd);
		printf("\n");
	}while(qtd < 1 || qtd > 31);
	
	inserir(temp, qtd);
	nr = maior(temp, dr, qtd, &mv);
	mostrarMaior(&mv, dr, nr);
	me = media(temp, qtd);
	qtdDiaAdm = menorMedia(&me, temp, qtd, tempAdm, dAdm);
	mostrarMm(tempAdm, dAdm, qtdDiaAdm);
	
	return 0;
}

void inserir(float *p, int tamanho){
	
	int i;
	printf("\nInserindo as temperaturas...\n\n");
	for(i = 1; i <= tamanho; i++, p++){
		printf("Temperatura no dia %i: ", i);
		scanf("%f", p);
		printf("\n");
	}
}

int maior(float *p, int *d, int tamanho, float *maiorValor){
	int x, y, mi, i, guardar;
	float *p1 = p, *p2;
	
	for(x = 1; x <= tamanho; x++, p1++ ){
		
		
		mi = 0;
		i = 0;
		p2 = p;
		for(y = 1; y <= tamanho; y++, p2++){
			if(*p1 >= *p2) mi++;
			if(*p1 == *p2) i++;
		}
		
		if(mi == tamanho){
			*maiorValor = *p1;
			*d = x;
			d++;
			guardar = i;
		}
		
	}
	
	return guardar;
}

void mostrarMaior (float *maiorValor, int *lista, int repet){
	
	int i = repet;
	printf("\nA maior temperatura registrada foi: %.2f°C, ", *maiorValor);
	if(repet == 1) printf("no dia %i", *lista);
	else{
		printf("nos dias ");
		
		do{ 
			if (i == 1) printf("e %i.", *lista);
			else printf("%i, ", *lista);
			lista++;
			i--;
		} while (i != 0);
	}
	
}

float media (float *p, int tamanho){
	int i;
	float total, media;
	for(i=0; i < tamanho; i++, p++){
		total = total + *p;
	}
	media = total/tamanho;
	printf("\n\nA media das temperaturas é %.2f°C\n\n", media);
	
	return media;

}

int menorMedia(float *media, float *p, int tamanho, float *ptAdm, int *pdAdm){
	int i, mqm = 0;
	
	for(i = 1; i <= tamanho; i++, p++){
		if(*p < *media) {
			mqm++;
			*ptAdm = *p;
			*pdAdm = i;
			ptAdm++;
			pdAdm++;
		}
	}
	
	
	return mqm;
}

void mostrarMm(float *ptAdm, int *pdAdm, int cont){
	
	int i;
	
	if(cont == 1) printf("Dia em que a temperatura foi menor que a média: Dia %i [%.2f]\n\n", *pdAdm, *ptAdm);
	
	else {
			printf("Dias em que a temperatura foi menor que a média...\n\n");
	
			for(i = 1; i <= cont; i++, ptAdm++, pdAdm++){
				if(i == cont) printf("e Dia %i [%.2f°C].\n\n", *pdAdm, *ptAdm);
				else printf("Dia %i [%.2f°C], ", *pdAdm, *ptAdm);
		}
	}
}
