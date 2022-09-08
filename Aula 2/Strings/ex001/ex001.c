#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void inverter (char *p, int tamanho);

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	char texto[30];
	int qtd;
	
	
	do{
		printf("Por favor, insira um texto de até 20 caracteres: ");
		gets(texto);
		printf("\n");
		qtd = strlen(texto);
	}while(qtd < 1 || qtd > 29);
	
	inverter(texto, qtd);
	
	return 0;
}

void inverter (char *p, int tamanho){
	int i;
	for(i = 1; i <= tamanho; i++, p++){
		printf("%c", *p);
	}
	printf(" escrito ao contrário é ");
	for(i =0; i <= tamanho; i++, p--){
		printf("%c", *p);
	}
	printf(".\n");
}
