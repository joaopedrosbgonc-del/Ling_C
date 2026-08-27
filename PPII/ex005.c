#include <stdio.h>

int main(){
    float A, a, l;

    printf("Altura:\n--> ");
    scanf("%f", &a);
    
    printf("Largura:\n--> ");
    scanf("%f", &l);

    A = a * l;
    printf("A area do retangulo eh: %.1f!", A);
}