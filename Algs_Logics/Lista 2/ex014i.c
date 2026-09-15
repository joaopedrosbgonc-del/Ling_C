#include <stdio.h>

int main() {
    int codigo;

    printf("==================================================\n");
    printf("               CARDÁPIO DO RESTAURANTE            \n");
    printf("==================================================\n");
    printf("Código | Prato                  | Valor           \n");
    printf("-------|------------------------|-----------------\n");
    printf("  1    | Hambúrguer com fritas  | R$ 28,00        \n");
    printf("  2    | Filé de frango grelhado| R$ 32,00        \n");
    printf("  3    | Lasanha à bolonhesa    | R$ 35,00        \n");
    printf("  4    | Filé de peixe com arroz| R$ 42,00        \n");
    printf("  5    | Salada especial        | R$ 25,00        \n");
    printf("==================================================\n\n");

    printf("Informe o código do prato desejado: ");
    scanf("%d", &codigo);

    printf("\n");

    switch (codigo) {
        case 1:
            printf("Prato escolhido: Hambúrguer com fritas\n");
            printf("Valor: R$ 28,00\n");
            break;

        case 2:
            printf("Prato escolhido: Filé de frango grelhado\n");
            printf("Valor: R$ 32,00\n");
            break;

        case 3:
            printf("Prato escolhido: Lasanha à bolonhesa\n");
            printf("Valor: R$ 35,00\n");
            break;

        case 4:
            printf("Prato escolhido: Filé de peixe com arroz\n");
            printf("Valor: R$ 42,00\n");
            break;

        case 5:
            printf("Prato escolhido: Salada especial\n");
            printf("Valor: R$ 25,00\n");
            break;

        default:
            printf("Opção inválida\n");
            break;
    }

    return 0;
}