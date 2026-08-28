#include <stdio.h>

int main(){
    int i;
    float nota, soma, media, Qnt;
    printf("Quantas notas?\n--> ");
    scanf("%f", &Qnt);
    for(i=1;i<=Qnt;i++){
        printf("Nota %d\n--> ", i);
        scanf("%f", &nota);
        soma += nota;
    }
    media = soma / Qnt;
    printf("A media das notas foi de %.1f", media);
}