#include <stdio.h>

int main(){
    int i;
    float num, soma;

    for(i=1; i<=4; i++){
        printf("Numero %d\n--> ", i);
        scanf("%f", &num);
        soma += num;
    }
    printf("A soma: %.0f", soma);
}