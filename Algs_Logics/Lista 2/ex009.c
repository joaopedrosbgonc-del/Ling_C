#include <stdio.h>
#include <string.h>

int main(){
    char S;
    float altura;

    printf("Sexo: [m/f]\n--> ");
    scanf("%c", &S);

    printf("Altura:\n-->");
    scanf("%f", &altura);

    (S=='m' || S=='M')?printf("Homem. Seu peso ideal eh: %.1f", ((72.7 * altura) - 58 )):printf("Mulher. Seu peso ideal eh: %.1f", (62.1
    * altura) - 44.7 );
}