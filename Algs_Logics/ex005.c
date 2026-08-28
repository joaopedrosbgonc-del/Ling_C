#include <stdio.h>

int main(){
    float sal, perc;

    printf("Qual o salario antigo?\n--> ");
    scanf("%f", &sal);

    printf("Qual a porcentagem do desconto?\n--> ");
    scanf("%f", &perc);

    sal += (sal *perc)/100;

    printf("O salario novo sera de %.2f", sal);
}