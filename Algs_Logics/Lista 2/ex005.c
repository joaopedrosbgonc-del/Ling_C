#include <stdio.h>
#include <string.h>

int main(){
    int num;
    printf("Escreva um valor:\n--> ");
    scanf(" %d", &num);

    num > 0?printf("%d", num *2):printf("%d", num *3);
}