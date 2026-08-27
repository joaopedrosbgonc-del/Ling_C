<<<<<<< HEAD
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
=======
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
>>>>>>> 94f97b3139e5dd6129b04a3d8ac61e36db0a668e
