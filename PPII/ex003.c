#include <stdio.h>

int main(){

    float soma, sub, mult, div, n1, n2;

    printf("Primeiro numero:\n--> ");
    scanf("%f", &n1);

    printf("Segundo numero:\n--> ");
    scanf("%f", &n2);

    soma = n1 + n2;
    sub = n1 - n2;
    mult = n1 * n2;
    div = n1 / n2;

    printf("===============\nSoma: %.0f;\nSubtracao: %.0f;\nMultiplicacao: %.0f;\nDivisao: %.1f", soma, sub, mult, div);
}