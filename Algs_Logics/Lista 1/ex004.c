#include <stdio.h>

int main(){
    float salario;

    printf("QUal o salario antigo?\n--> ");
    scanf("%f", &salario);

    salario += (salario *25)/100;

    printf("O salario novo sera de %.2f", salario);
}