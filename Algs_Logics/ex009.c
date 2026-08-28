#include <stdio.h>

int main(){
    float b, a, A;

    printf("Qual a base do triangulo?\n--> ");
    scanf("%f", &a);
    printf("Qual a altura do triangulo?\n--> ");
    scanf("%f", &b);

    A = (b * a) / 2;
    printf("Area do triangulo: %.1f", A);
}