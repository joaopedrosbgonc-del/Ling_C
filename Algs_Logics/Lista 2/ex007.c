#include <stdio.h>
#include <string.h>

int main(){
    int num;

    printf("digite um valor inteiro:\n--> ");
    scanf("%d", &num);

    (num % 2 == 0) ? (num += 5) : (num += 8);
    printf("%d", num);
}