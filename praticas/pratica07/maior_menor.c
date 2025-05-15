#include <stdio.h>

int main(){
    int numero, maior, menor = 0;

    printf("Insira um numero: ");
    scanf("%i", &numero);

    maior = numero;
    menor = numero;

    while(numero != 0){
        if(numero > maior){
            maior = numero;
        }
        if(numero < menor){
            menor = numero;
        }
        printf("Insira um numero: ");
        scanf("%i", &numero);
    }

    printf("%i, %i", maior, menor);

    return 0;
}