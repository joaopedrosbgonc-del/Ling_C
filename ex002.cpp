#include <stdio.h>

int main(){
	int n1, n2, soma;
	
	printf("Qual o primeiro numero?\n--> ");
	scanf("%d", &n1);
	
	printf("Qual o segundo numero?\n--> ");
	scanf("%d", &n2);
	
	soma = n1 + n2;
	printf("A soma eh de: %d", soma);
	
	return 0;
}
