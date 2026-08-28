#include <stdio.h>

int main(){
    float salB, salN, grat=5, imp=7;

    printf("Qual o salario antigo?\n--> ");
    scanf("%f", &salB);

    salN = (salB + (salB * grat)/100) - ((salB * imp)/100);
    printf("Novo salario: %.2f R$", salN);
}