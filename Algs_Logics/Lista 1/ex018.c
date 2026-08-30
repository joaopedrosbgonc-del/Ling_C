#include <stdio.h>

int main(){
	float pesoS, Qnt, cadaG, gasto, resto;
	
	printf("Qual o peso do saco e a quantidade para cada gato? (Kg)(g) [x y]\n--> ");
	scanf("%f %f", &pesoS, &Qnt);
	
	cadaG = Qnt / 1000.0;
	gasto = (cadaG * 2) * 5;

	resto = pesoS - gasto;
	printf("Ao final de 5 dias, sobra %.1f Kg", resto);
}
