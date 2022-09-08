#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>

void procurar (char *texto, char *caracter, int tamanho, int *posic);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	char a[31], c;
	int qtd, p[30];
	
	do{
		printf("\nPor favor, insira um texto de at� 30 caracteres: ");
		gets(a);
		qtd = strlen(a);
	} while(qtd < 0 || qtd > 30);
	
	printf("\n");
	
	printf("Por favor, digite qual caracter voc� deseja procurar: ");
	c = getche();
	
	procurar(a, &c, qtd, p);
	
	return 0;
}

void procurar (char *texto, char *caracter, int tamanho, int *posic){
	int i, cont = 0;
	int *a = posic;
	
	for(i = 1; i <= tamanho; i++, texto++){
		if(*caracter == *texto) {
			*a = i;
			cont++;
			a++;
		}
	}
	
	if(cont == 0) printf("\n\nA letra %c n�o foi encontrada.\n", *caracter);
	else{
		printf("\n\nA letra %c foi encontrada", *caracter);
		if(cont == 1) {
			printf("!\n");
			printf("\nNa posi��o %i", *posic);
		}
			
		else {
			printf(", um total de %i vezes.\n", cont);
			printf("\nNas posi��es ");
			for(i = 0; i < cont; i++, posic++)
				printf("%i ", *posic);
		}
		
	}
	
}
		

			
			