#include <stdio.h>

int main(){
    // ++ aumenta 1
    // -- diminui 1

    int numero=10;
    printf("Pre-Incrementa numero = %i\n", ++numero);//primeiro soma depois mostra
    printf("Pre-Decrementa numero = %i\n", --numero);//primeiro decrementa depois mostra
    printf("Pos-Incrementa numero = %i\n", numero++);//primeiro mostra depois soma
    printf("Pos-Decrementa numero = %i\n", numero--);//primeiro mostra depois decrementa

    return 0;
}