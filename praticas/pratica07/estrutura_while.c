#include <stdio.h>

int main(){
    int nota=0;
    
    printf("Insira uma nota: ");
    scanf("%i", &nota);

    while(nota < 1 || nota > 10){
        printf("Nota invalida. Tente novamente!\n");
        printf("Insira uma nota: ");
        scanf("%i", &nota);        
    }
    return 0;
}