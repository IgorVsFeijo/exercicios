#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char a[30], e = 130, aa = 160;
	int qtd;
	
	do{
		printf("Por favor, insira o texto de at%c 30 caracteres: ", e);
		gets(a);
		qtd = strlen(a);
	} while (qtd < 0 || qtd > 29);
	
	printf("\n%s escrito ao contr%crio %c ",a, aa, e);
	
	inverter(a, qtd);
	
	printf("%s.\n\n", a);
	
	getch();
	
	return 0;
}

void inverter(char *texto, int tamanho){
	
	int i;
	char t, *a = texto;
	
	for(i = 1; i < tamanho; i++, a++);
	for(i = 0; i < (tamanho/2); i++, texto++, a--) {
		t = *texto;
		*texto = *a;
		*a = t;
	}
	
}