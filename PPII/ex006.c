#include <stdio.h>

int main(){
    float pi=3.14159, A, r;

    printf("Qual o raio?\n--> ");
    scanf("%f", &r);

    A = pi * (r*r);
    printf("A area do circulo eh de: %.2f! ", A);
}