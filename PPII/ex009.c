#include <stdio.h>

int main(){
    float dist, litros, cons;

    printf("Qual a distancia percorrida em KM?\n--> ");
    scanf("%f", &dist);

    printf("Quantos litros usados?\n--> ");
    scanf("%f", &litros);

    cons = dist / litros;
    printf("O consumo medio do veiculo eh de %.0f Km/L", cons);

    return 0;
}