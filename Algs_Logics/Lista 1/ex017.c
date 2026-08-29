#include <stdio.h>

int main(){
	float dep, saldo, Opc, valC;
	
	printf("Quanto depositou?\n--> ");
	scanf("%f", &dep);
	
	printf("Quantas operacoes? e Qual o valor do cheque?\n--> ");
	scanf("%f %f", &Opc, &valC);
	
	saldo = (dep - (Opc * (valC * 0.38) /100)) - (Opc * valC);
	
	printf("Saldo final: %.2f R$", saldo);
}
