#include <stdio.h>

int main(){
    int maior, n=0;

    maior = n;
    for(int i=0; i<=10; i++){
        printf("Escreva um numero:\n--> ");
        scanf(" %d", &n);
        if(n > maior){
            maior = n;
        } else{
            continue;
        }
    }
    printf("Maior: %d", maior);
}