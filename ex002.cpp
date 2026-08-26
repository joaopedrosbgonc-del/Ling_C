//Faça um programa que receba três notas, calcule e mostre a média aritmética entre elas.

#include <stdio.h>

int main(){
	float num, i, soma=0, media;

	for(i=1; i<=3; i++){
		printf("Escreva a nota %.0f\n--> ", i);
		scanf("%f", &num);
		soma += num;
	}
	media = soma / 3;
	printf("A media aritmetica e de: %.2f", media);
}