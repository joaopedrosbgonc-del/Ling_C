//Faça um programa que receba quatro números inteiros, calcule e mostre a soma desses números

#include <stdio.h>

int main(){
	int n1, n2, n3, n4, i=1, soma;
	
	printf("Escreva o primeiro numero:\n--> ");
	scanf("%d", &n1);
	
	printf("Escreva o primeiro numero:\n--> ");
	scanf("%d", &n2);
	
	printf("Escreva o primeiro numero:\n--> ");
	scanf("%d", &n3);
	
	printf("Escreva o primeiro numero:\n--> ");
	scanf("%d", &n4);
	
	soma = n1 + n2 + n3 + n4;
	printf("A soma dos 4 numeros e: %d", soma);
	
}