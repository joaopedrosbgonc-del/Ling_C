#include <stdio.h>
#include <string.h>

int main(){
    float preco, valorF;

    printf("Qual o preco:\n--> ");
    scanf("%f", &preco);

    printf("Qual opcao de pagamento?\n\
[1] A vista em dinheiro ou cheque: 10%% de desconto\n\
[2] A vista no cartao de credito: 15%% de desconto\n\
[3] Em duas parcelas: preco normal, sem juros\n\
[4] Em duas parcelas: acrescimo de 10%% sobre o preco normal\n");
    int r;
    scanf("%d", &r);

    switch (r){
        case 1:
            valorF = preco - ((preco / 100) * 10);
            printf("O preco final eh: R$%.2f", valorF);
            break;
        case 2:
            valorF = preco - ((preco / 100) * 15);
            printf("O preco final eh: R$%.2f", valorF);
            break;
        case 3:
            valorF = preco / 2;
            printf("Serao duas parcelas de %.2f", valorF);
            break;
        case 4:
            valorF = (preco + ((preco / 100) * 10)) / 2;
            printf("Serao duas parcelas de %.2f", valorF);
            break;
    }
}