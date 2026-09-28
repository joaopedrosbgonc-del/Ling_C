#include <stdio.h>

int main(){
    for(int i=1; i<=10; i++){
        float n=0;
        printf("Nota do aluno %d\n--> ", i);
        scanf(" %f", &n);

        if(n >= 7){
            printf("Aprovado!\n");
        } else{
            printf("Reprovado!\n");
        }
    }
}