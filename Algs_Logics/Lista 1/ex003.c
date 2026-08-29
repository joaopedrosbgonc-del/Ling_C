#include <stdio.h>

int main(){
    int i;
    float nota, peso, sMults, sPesos, media;

    for(i=1;i<=3;i++){ 
        printf("Qual a nota %d?\n--> ", i);
        scanf("%f", &nota);

        printf("Qual o peso da nota %d?\n--> ", i);
        scanf("%f", &peso);

        sMults += nota * peso;
        sPesos += peso;
    }
    media = sMults / sPesos;
    printf("Media ponderada: %.1f", media);
}