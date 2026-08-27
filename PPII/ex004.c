#include <stdio.h>

int main(){
    int i, q;
    printf("Quantos numeros?\n--> ");
    scanf("%d", &q);
    double nums[q], soma, media;

    for(i=1;i<=q;i++){
        printf("Digite o numero %d\n--> ", i);
        scanf("%lf", &nums[i - 1]);
        soma += nums[i - 1];
    }
    media = soma / q;
    printf("A media aritimetica foi de: %.2lf", media);
}