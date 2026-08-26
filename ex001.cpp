//Faça um programa que receba quatro números inteiros, calcule e mostre a soma desses números

#include <stdio.h>

int main(){
	int soma = 0, i, num;

	for(i=1;i<=4;i++){
		printf("Escreva o %dº numero\n--> ", i);
		scanf("%d", &num);
		soma = soma + num;
		num = 0;
	}
	printf("%d", soma);
}