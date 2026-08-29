#include <stdio.h>

int main(){
    int anoN, anoA, idade, idadeF;

    printf("Quando nasceu?\n--> ");
    scanf("%d", &anoN);

    printf("Quando estamos?\n--> ");
    scanf("%d", &anoA);

    idade = anoA - anoN;
    idadeF = idade + (2050 - anoA);

    printf("Idade: %d\nVai ter: %d", idade, idadeF);
}