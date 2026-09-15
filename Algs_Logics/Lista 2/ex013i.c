#include <stdio.h>

int main() {
    float vel_max, vel_reg, percentual;

    printf("Digite a velocidade maxima permitida na via (km/h): ");
    scanf("%f", &vel_max);

    printf("Digite a velocidade registrada do veiculo (km/h): ");
    scanf("%f", &vel_reg);

    printf("\n========================================\n");
    printf("         RELATORIO DE TRANSITO          \n");
    printf("========================================\n");
    printf("Limite da via: %.2f km/h\n", vel_max);
    printf("Velocidade registrada: %.2f km/h\n", vel_reg);

    if (vel_reg <= vel_max) {
        printf("Situacao: Nao houve infracao.\n");
    } else {
        percentual = ((vel_reg - vel_max) / vel_max) * 100.0;
        printf("Percentual excedido: %.2f%%\n", percentual);

        if (percentual <= 20.0) {
            printf("Classificacao: Infracao MEDIA\n");
        } else {
            if (percentual <= 50.0) {
                printf("Classificacao: Infracao GRAVE\n");
            } else {
                printf("Classificacao: Infracao GRAVISSIMA\n");
            }
        }

        if (vel_reg > 120.0) {
            printf("ALERTA: Velocidade extremamente elevada!\n");
        }
    }
    printf("========================================\n");

    return 0;
}