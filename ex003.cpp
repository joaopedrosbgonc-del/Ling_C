#include <stdio.h>

int main(){
	float soma, div, mult, sub;
	int n1, n2;
	
	printf("Qual o primeiro numero:\n--> ");
	scanf("%d", &n1);
	
	printf("Qual o segundo numero:\n--> ");
	scanf("%d", &n2);
	
	soma = n1 + n2;
	sub = n1 - n2;
	mult = n1 * n2;
	div = n1 / n2;
	
	printf("Soma: %.0f;\nSubtracao: %.0f;\nMultiplicacao: %.0f;\nDivisao: %.2f", soma, sub, mult, div);
	
	return 0;
}
