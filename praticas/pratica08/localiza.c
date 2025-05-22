#include <stdio.h>

int main(){
    int numeros[10];
    int numero;
    int achou = -1;

    for(int i=0; i<10;i++){
        scanf("%i", &numeros[i]);
    }
    scanf("%i", &numero);
    for(int i=0; i<10;i++){
        if(numeros[i]== numero){
            achou = i;
        }
    }
    if(achou < 0){
        printf("O numero nao foi encontrado!");
    }else{
        printf("O numero foi encontrado na posicao %i", achou);
    }

    return 0;
}