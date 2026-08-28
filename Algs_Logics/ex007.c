#include <stdio.h>

int main(){
    float sal;

    printf("Qual o salario antigo?\n--> ");
    scanf("%f", &sal);

    sal = (sal - (sal * 10)/100) + 50;
    printf("Novo salario: %.2f", sal);
}