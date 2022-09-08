#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>

void procurar (char *texto, char *txt2, int tamanho);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	char a[31], c[30];
	int qtd;
	
	do{
		printf("\nPor favor, insira um texto de até 30 caracteres: ");
		gets(a);
		qtd = strlen(a);
	} while(qtd < 0 || qtd > 30);
	
	printf("\n");
	
	printf("Por favor, digite qual string você deseja procurar: ");
	gets(c);
	
	procurar(a, c, qtd);
	
	return 0;
}

void procurar (char *texto, char *txt2, int tamanho){
	int i, cont = 0, tam = strlen(txt2);
	char copy[30];
	
	for(i = 0; i < tamanho; i++, texto++){
		memcpy(copy, texto, tam);
		if((strcmp(copy, txt2)) == 0) cont++;
	}
	
	if(cont == 0) printf("\n\nA string %s não foi encontrada.\n", txt2);
	else{
		printf("\n\nA string %s foi encontrada", txt2);
		if(cont == 1) 
			printf("!\n");
		else 
			printf(", um total de %i vezes.\n", cont);	
	}
}