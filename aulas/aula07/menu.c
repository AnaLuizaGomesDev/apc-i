#include <stdio.h>
#include <stdlib.h>

#define BLK "\e[0;30m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define BLU "\e[0;34m"
#define MAG "\e[0;35m"
#define CYN "\e[0;36m"
#define WHT "\e[0;37m"
#define reset "\e[0m"

int main(){
    int opcao = 0;
    printf(MAG);
    while(opcao != 4){
        system("cls");
        printf("--------------------------\n");
        printf("|     M E U  J O G O     |\n");
        printf("--------------------------\n");
        printf("|                        |\n");
        printf("|     1 - Novo Jogo      |\n");
        printf("|     2 - Ver Score      |\n");
        printf("|     3 - Sobre          |\n");
        printf("|     4 - Sair           |\n");
        printf("|                        |\n");
        printf("--------------------------\n");
        printf("Escolha uma opcao > ");
        scanf("%i", &opcao);
        while(getchar() != '\n');

        switch(opcao){
            case 1: {
                int nivel=0;

                system("cls");
                printf("Novo Jogo\n\n");
                printf("Escolha um nivel\n");
                printf("1 - Facil\n");
                printf("2 - Medio\n");
                printf("3 - Dificil\n");
                printf("> ");
                scanf("%i", &nivel);
                break;
            }
            case 2:{
                system("cls");
                printf("Score do Jogo\n\n");
                printf("1 - Jogador A - 10000 pontos\n");
                printf("2 - Jogador B - 9000 pontos\n");
                printf("3 - Jogador C - 8000 pontos\n");
                printf("4 - Jogador D - 7000 pontos\n");
                printf("5 - Jogador E - 6000 pontos\n");
                printf("6 - Jogador F - 5000 pontos\n");
                printf("Pressione ENTER para continuar...");
                while(getchar() != '\n');
                break;
            }
            case 3:{
                system("cls");
                printf("Sobre o Jogo\n\n");
                printf("Desenvolvido em C\n");
                printf("Por um programador raiz\n");
                printf("Copyright(C) 2025\n\n");
                printf("Pressione ENTER para continuar...");
                while(getchar() != '\n');
                break;
            }
            case 4:{
                system("cls");
                printf("Ate Logo!\n");
                break;
            }
            default: {system("cls");
                printf("Opcao invalida! Tente de novo. \n");
            }
        }
    }

    return 0;
}