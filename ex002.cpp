//Faça um programa que receba três notas, calcule e mostre a média aritmética entre elas.

#include <stdio.h>

int main(){
	float n1, n2, n3, soma, media;
	
	printf("Nota 1\n--> ");
	scanf("%f", &n1);
	
	printf("Nota 2\n--> ");
	scanf("%f", &n2);
	
	printf("Nota 3\n--> ");
	scanf("%f", &n3);
	
	soma = n1 + n2 + n3;
	
	media = soma / 3;
	
	printf("A media das notas e de: %.2f", media);
}