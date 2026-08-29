#include <stdio.h>

int main(){
    float r, pi, A;

    printf("Qual o valor de PI?\n--> ");
    scanf("%f", &pi);

    printf("Qual o valor do raio?\n--> ");
    scanf("%f", &r);

    A = pi * (r * r);
    printf("Area do circulo: %.1f", A);
}