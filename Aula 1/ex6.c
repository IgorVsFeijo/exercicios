#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

long int fatorial(long int numero);

int main (){
    system("chcp 65001");
    setlocale(LC_ALL, NULL);

    long int n, f;

    printf("\nPor favor, insira um número: ");
    scanf("%li", &n);

    f = fatorial(n);

    printf("%li! = %li", n, f);

    getch();

    return main();
}

long int fatorial (long int numero){
    if (numero == 0)
    return 1;

    return (numero*fatorial(numero-1));
}