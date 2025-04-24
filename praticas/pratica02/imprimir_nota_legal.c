#include <stdio.h>

int main(){
    printf("==============================\n");
    printf("     N O T A    L E G A L     \n");
    printf("==============================\n");
    printf("%s %11s %s\n", "Produto", "Qtd", "Valor Unit" );
    printf("%s %10.03i %10.1f\n", "Camiseta", 2, 39.99);
    printf("%s %13.03i %10.1f\n", "Calca",1, 89.90);
    printf("%s %7.03i %10.1f\n","Meia Social",3 ,19.99);
    printf("==============================\n");
    printf("%s %23.2f", "Total:",229.85);
    return 0;
}