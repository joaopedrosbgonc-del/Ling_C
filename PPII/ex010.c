#include <stdio.h>

int main(){
    char nomeP[10];
    int Qnt;
    float preco, tot;

    printf("Qual o produto voce quer comprar?\n--> ");
    scanf("%s", nomeP);

    printf("Quantos(as) [%s] voce quer?\n--> ", nomeP);
    scanf("%d", &Qnt);

    printf("Quanto custa um(a) [%s]?\n--> ", nomeP);
    scanf("%f", &preco);

    tot = preco * Qnt;
    printf("%d [%s] custam %.2f R$.", Qnt, nomeP, tot);
}