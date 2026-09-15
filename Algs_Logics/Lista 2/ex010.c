#include <stdio.h>
#include <string.h>

int main(){
    float altura, peso;

    printf("Escreva o peso:\n--> ");
    scanf("%f", &peso);

    printf("Escreva a altura:\n--> ");
    scanf("%f", &altura);

    float imc = (peso/(altura * altura));
    printf("\no IMC eh: %.1f\n", imc);

    if(imc < 18.5){
        printf("Abaixo do peso!");
    }else if(imc >= 18.5 && imc < 25){
        printf("Peso normal");
    }else if(imc >= 25 && imc < 30){
        printf("Acima do peso!");
    }else{
        printf("Obeso!!");
    }
}