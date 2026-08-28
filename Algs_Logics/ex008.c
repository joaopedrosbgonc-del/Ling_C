#include <stdio.h>

int main(){
    float dep, tax, rend, tot;

    printf("Qual o valor do deposito?\n--> ");
    scanf("%f", &dep);

    printf("Qual a taxa?\n--> ");
    scanf("%f", &tax);

    tot = dep + ((dep * tax)/100);
    rend = tot - dep;

    printf("O deposito de %.2f R$, sob taxa de %.0f%%, obteve um rendimento de %.2f R$ e um total de %.2f R$\n", dep, tax, rend, tot);
}