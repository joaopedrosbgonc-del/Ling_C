#include <stdio.h>
#include <string.h>

int main(){
    int v1, v2;

    printf("Digite dois valores numericos (1 ou 0) para verdadeiro ou falso:\n--> ");
    scanf("%d %d", &v1, &v2);

    if(v1 == 1 && v2 == 1){
        printf("Ambos Verdadeiros");
    } else if(v1 == 0 && v2 == 0){
        printf("Ambos Falsos");
    } else{
        printf("Valores logicos diferentes");
    }
}