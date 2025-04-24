#include <stdio.h>

int main(){
    long long ISBN = 0;
    int numero_paginas = 0;
    float preco = 0;
    int data_publicacao = 0;
    
    printf("ISBN: %013lld\n", ISBN);
    printf("Num. Paginas: %.03d\n", numero_paginas);
    printf("Preco: %07.2f\n", preco);
    printf("Publicado em: %.04d", data_publicacao);
}