#include <stdio.h>
#include <string.h>

int main(){
    int A, B, r;
    printf("Escreva os valores de A e B:\n--> ");
    scanf(" %d %d", &A, &B);

    (A==B)?printf("%d", (r = A + B)):printf("%d",(r = A * B));
}