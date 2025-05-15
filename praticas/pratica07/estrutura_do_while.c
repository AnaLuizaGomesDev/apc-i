#include <stdio.h>

int main(){
    int nota=0;

    do{
        printf("Insira uma nota: ");
        scanf("%i", &nota);
        if(nota < 1 || nota > 10){
            printf("Nota invalida.Tente Novamente!\n");
        }
    }while(nota < 1 || nota > 10);
    return 0;
}