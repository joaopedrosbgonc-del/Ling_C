#include <stdio.h>

int main(){
    float C, F;

    printf("Qual a temperatura em Celcius?\n--> ");
    scanf("%f", &C);

    F = (C * 9/5) + 32;
    printf("A temperatura convertida e de %.1f fahrenheit!", F);
}