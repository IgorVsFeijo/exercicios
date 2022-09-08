#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void inserir(char *mensagem, char *string);
char *nomeJedi(char *nome, char *sobrenome, char *jedi);
void aloca(char **p, int tam);



int main(int argc, char *argv[]) {
	
// Nome Jedi: as 3 primeiras letras do primeiro nome + as 2 primeiras letras do sobrenome
// Sobrenome Jedi: as 2 primeiras letras do nome da mãe + as 3 primeiras letras da cidade em que nasceu
// Nome composto: as 3 primeiras letras do nome Jedi + as 3 últimas letras do sobrenome Jedi.

 setlocale(LC_ALL, "Portuguese");

 char *pNome, *sNome, *mNome, *cidade; //Variáveis de Entrada
 char *nJedi, *sJedi, *ncJedi; //Variaveis de Saida
 int temp;
 
 char insPN[] = "seu primeiro nome", insSN[] = "seu sobrenome", insNM[] = "o nome da sua mãe", insC[] = "a cidade em que nasceu";
 
	printf("\n%u\n", pNome);
	inserir(insPN, pNome);
	printf("\n%u\n", pNome);
	printf("teste");
	
	/*sNome = inserir(insSN, &sNome);
	printf("\n%s\n", sNome);
	mNome = inserir(insNM, &mNome);
	printf("\n%s\n", mNome);
	cidade = inserir(insC, &cidade);
	printf("\n%s\n", cidade);*/
	
	printf("\n\nNome:%s   Sobrenome:%s\n\n", pNome, sNome);
	
	nJedi = nomeJedi(pNome, sNome, nJedi);
	
	printf("\nNome Jedi: %s\n\n", nJedi);

	return 0;
}

void inserir(char *mensagem, char *string){
	
	int c;
	char temp[30];
	
	string = NULL;
	
	printf("\nPor favor, insira %s: ", mensagem);
	gets(temp);
	
	c= (strlen(temp))+1;
	
	aloca(&string, c);
	
	strcpy(string, temp);
	
	printf("\n%u\n", string);
		
}

char *nomeJedi(char *nome, char *sobrenome, char *jedi){
	int i;
	
	for(i = 0; i < 3; i++, nome++, jedi++){
		*jedi = *nome;
		printf("\n%s  >>>  %s\n", *jedi, *nome);
	}
	
	for(i = 0; i < 2; i++, sobrenome++, jedi++){
		*jedi = *sobrenome;
		printf("\n%s  >>>  %s\n", *jedi, *sobrenome);
	}
}

void aloca(char **p, int tam){
	
	if((*p = (char*)realloc(*p, tam*sizeof(char)))==NULL){
		printf("\nErro na alocação Dinâmica\n");
		exit (1);
		
	}
}