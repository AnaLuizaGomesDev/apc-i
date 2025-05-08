#include <stdio.h>

int main(){
    long int matricula = 0;
    int idade = 99;
    float altura = 9.9;
    float peso = 999.0;
    char sexo = 'F';

    printf("Matricula: %.08li\n", matricula);
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f m\n", altura);
    printf("Peso: %.1f kg\n", peso);
    printf("Sexo: %c\n", sexo);
    return 0;
}