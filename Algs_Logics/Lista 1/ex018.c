#include <stdio.h>

int main(){
	float pesoS, Qnt, cadaG, tempo;
	
	printf("Qual o peso do saco e a quantidade para cada gato? (g) [x y]\n--> ");
	scanf("%f %f", &pesoS, &Qnt);
	
	cadaG = Qnt / 1000;
	tempo = pesoS / cadaG;
	
	printf("%.0f dias para acabar", tempo);
}
