#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

void leitura (char *t);

int main(){
    char txt[101], txtinv[101];
    int tam;
		
	setlocale(LC_ALL, "Portuguese");
	
	leitura(txt);
	
	tam = strlen(txt);
	inverter(txt, txtinv, tam);
	
	printf("\n");
	puts(txt);
	puts(txtinv);
	
	
}

void leitura (char *t){
	
	do{
		printf("Por favor, insira um texto de até 100 caractertes: ");
		gets(t);
	} while((strlen(t)) < 0 || (strlen(t)) > 100);
}

void inverter(char *p1, char *p2, int caracteres){
	int i;
	char temp[100];
	char *pt = temp, *r1 = p1, *r2 = p2;
	
	for(i = 0; i <= caracteres; i++){
		pt = temp;
		p1 = r1+(caracteres-1);
		
		printf("\n%c  >>>   ", *(p1-i));
		*(pt+i) = *(p1-i);
		printf("%c\n", *(pt + i));
		
	}
	
	printf("\n%s   >>>    %s\n", r1, temp);
	
	for(i = 0; i <= caracteres; i++){
		pt=temp;
		p2 = r2;
		
		printf("\n%c   >>>   ", *(pt + i));
		*(p2+i) = *(pt+i);
		printf("%c\n", *(p2+i));
	}
	
	printf("\n%s   >>>    %s\n", temp, r2 );
}