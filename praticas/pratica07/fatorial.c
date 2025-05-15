#include <stdio.h>

int main(){
    int numero, fatorial =1;
    
    printf("Insira um numero: ");
    scanf("%i", &numero);

    for(int i=numero; i>0; i--){
        fatorial = fatorial * i;
    }

    printf("O fatorial de %i eh %i", numero, fatorial);
}