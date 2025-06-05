#include <stdio.h>

int main(){
    char frase[31];

    scanf("%30[^\n]", frase);

    char matriz[6][5];

    int k = 0;

    for(int i=0; i<6; i++){
        for(int j=0;j<5;j++){
            matriz[i][j] = frase[k];
            k++;
        }
    }

    printf("A transposicao da frase eh ");

    for(int j=0; j<5;j++){
        for(int i=0; i<6;i++){
            printf("%c", matriz[i][j]);
        }
    }
    
    printf("\n");
    return 0;
}