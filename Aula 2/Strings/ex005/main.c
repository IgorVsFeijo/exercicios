#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>

void procurar (char *texto, char *caracter, int tamanho);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	char a[31], c;
	int qtd;
	
	do{
		printf("\nPor favor, insira um texto de até 30 caracteres: ");
		gets(a);
		qtd = strlen(a);
	} while(qtd < 0 || qtd > 30);
	
	printf("\n");
	
	printf("Por favor, digite qual caracter você deseja procurar: ");
	c = getche();
	
	procurar(a, &c, qtd);
	
	return 0;
}

void procurar (char *texto, char *caracter, int tamanho){
	int i, cont = 0;
	for(i = 0; i < tamanho; i++, texto++){
		if(*caracter == *texto) cont++;
	}
	
	if(cont == 0) printf("\n\nA letra %c não foi encontrada.\n", *caracter);
	else{
		printf("\n\nA letra %c foi encontrada", *caracter);
		if(cont == 1) 
			printf("!\n");
		else 
			printf(", um total de %i vezes.\n", cont);	
	}
}