#include <stdio.h>
#include <string.h>

int main(){
    int num;

    printf("Escreva um numero\n--> ");
    scanf(" %d", &num);

    (num % 2 == 0)?printf("eh Par"):printf("eh Impar"); 
}