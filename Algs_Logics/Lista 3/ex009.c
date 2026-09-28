#include <stdio.h>

int main(){
    int s=1234, r;

    printf("Digite a senha:\n--> ");
    scanf(" %d", &r);

    while(r != s){
        printf("Senha incorreta! tente novamente\n--> ");
        scanf(" %d", &r);
    }
    printf("Seja bem vindo!");
}