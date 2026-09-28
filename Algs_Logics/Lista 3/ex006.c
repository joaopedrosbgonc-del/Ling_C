#include <stdio.h>

int main(){
    int qnt;
    float media, soma=0;

    printf("Quantos alunos?\n--> ");
    scanf(" %d", &qnt);

    for(int i=1; i<=qnt; i++){
        float n;
        printf("Qual a nota do aluno %d?\n--> ", i);
        scanf("%f", &n);
        soma += n;
    }
    media = soma / qnt;
    printf("Media da turma: %.1f", media);
}