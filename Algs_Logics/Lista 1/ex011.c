#include <stdio.h>
#include <math.h>

int main(){
    float num, rQ, rC, eQ, eC;

    printf("Digite um numero:\n--> ");
    scanf("%f", &num);

    while(num < 0){
        printf("ERROR! Digite um numero maior que zero!\n--> ");
        scanf("%f", &num);
    }

    eQ = pow(num, 2);
    eC = pow(num, 3);
    rQ = sqrt(num);
    rC = cbrt(num);

    printf("Ao quadrado: %.2f\nAo cubo: %.2f\nRaiz quadrada: %.2f\nRaiz cubica: %.2f", eQ, eC, rQ, rC);
}