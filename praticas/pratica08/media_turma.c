#include <stdio.h>

int main(){
    float notas[10];
    float soma = 0,media;
    int qtde_acima_media = 0;
    
    for(int i=0;i<10;i++){
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma = soma + notas[i];
    }
    media = soma / 10;
    for(int i=0; i<10; i++){
        if(notas[i]>media){
            qtde_acima_media++;
        }
    }
    printf("media da turma: %.2f\n", media);
    printf("Quantidade de alunos acima da media: %d\n", qtde_acima_media);
    return 0;
}