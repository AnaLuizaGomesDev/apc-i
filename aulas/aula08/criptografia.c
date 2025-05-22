#include <stdio.h>
//ultimo caractere da string = /0
int main(){
    char frase[30] = "Eu programo em C";//armazenar string dentro de uma matriz de caracteres

    for(int i=0;i<30;i++){
        printf("%c", frase[i]);
    }
    printf("\n");
    printf("%s\n", frase);

    printf("Entre com uma frase: ");
    scanf("%[^\n]s", frase);
    while(getchar() != '\n');

    char cesar[6][5];
    int k=0;

    for(int i=0; i<6; i++){
        for(int j=0; j<5; j++){
            cesar[i][j] = frase[k];
            k++;
        }
    }

    printf("Sua frase codificada: ");
    for(int j=0; j<5;j++){
        for(int i =0;i<6;i++){
            printf("%c", cesar[i][j]);
        }
    }
    printf("\n");

    return 0;
}