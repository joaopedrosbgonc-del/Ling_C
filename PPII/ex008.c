#include <stdio.h>

int main(){
    float valor, total, horas;

    printf("Quantas horas por dia?\n--> ");
    scanf("%f", &horas);

    printf("Quanto recebe por hora?\n--> ");
    scanf("%f", &valor);

    total = (horas * valor) * 30;
    printf("Salario total: %.2f", total);

    return 0;
}