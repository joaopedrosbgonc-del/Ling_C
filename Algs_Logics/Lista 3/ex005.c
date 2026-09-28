#include <stdio.h>

int main(){
    int n, soma=0;

    printf("Escreva um numero: ");
    scanf(" %d", &n);

    for(int i=1; i<=n; i++){
        printf("%d ", i);
        soma += i;
        if(i==n){
            continue;
        } else{
            printf("+ ");
        }
    }
    printf("= %d", soma);
}