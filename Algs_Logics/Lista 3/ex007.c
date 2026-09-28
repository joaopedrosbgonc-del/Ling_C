#include <stdio.h>

int main(){
    int A=0, R=0;
    float Pa=0;
    for(int i=1; i<=10; i++){
        float n=0;
        printf("Nota do aluno %d\n--> ", i);
        scanf(" %f", &n);

        if(n >= 7){
            printf("Aprovado!\n");
            A++;
        } else{
            printf("Reprovado!\n");
            R++;
        }
    }
    Pa = (((float)A/10) *100);
    printf("%d Aprovados;\n%d Reprovados;\n%f%% de aprovacao", A, R, Pa);
}