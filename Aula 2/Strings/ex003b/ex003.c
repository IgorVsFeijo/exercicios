#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char a[30], b[30], e = 130, aa = 181;
	int qtd;
	
	do{
		printf("Por favor, insira o texto de at%c 30 caracteres: ", e);
		gets(a);
		qtd = strlen(a);
	} while (qtd < 0 || qtd > 29);
	
	inverter(a, b, qtd);
	
	printf("%s escrito ao contr%crio %c %s.\n\n",a, aa, e, b);
	
	getch();
	
	return 0;
}

void inverter(char *texto, char *auxiliar, int tamanho){
	
	int i;
	for(i = 1; i < tamanho; i++, texto++);
	for(i = 0; i <= tamanho; i++, texto--, auxiliar++) {
		if (isupper(*texto))
			*auxiliar = tolower(*texto);
		else
			*auxiliar = toupper(*texto);
	}
	
}