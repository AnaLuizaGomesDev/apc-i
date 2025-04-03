#include <stdio.h>

int main(){

    char tecla;
    printf("Pressione uma tecla e depois ENTER: ");
    scanf("%c", &tecla); // não sabe tecla = valor então precisa acessar endereço da variável com o operador "&"
    getchar(); //limpar a leitura da tecla anterior
    printf("Voce pressionou a tecla '%c'\n", tecla);
    printf("Pressione outra tecla e depois ENTER: ");
    scanf("%c", &tecla);
    getchar();
    printf("Voce pressionou a tecla '%c'\n", tecla);

    char nome[31];
    printf("Informe seu nome: ");
    scanf("%[^\n]s", nome); //não precisa do '&' pois é um conjunto, %[^\n]s "ler até achar o \n no final", '^' = no final
    printf("Ola %s!\n", nome);

    return 0;
}