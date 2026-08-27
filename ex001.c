#include <stdio.h>

int main(){
    char nome[20];

    printf("Qual o nome?\n--> ");
    scanf("%s", nome);

    printf("Olá, %s! Seja bem-vindo(a) à disciplina de Lógica de Programação.", nome);
}