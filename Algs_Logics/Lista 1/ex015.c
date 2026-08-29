#include <stdio.h>

int main(){
	float precoI, percL, percI, precoT, lucro, imposto;
	
	printf("Qual o preco de Fabrica; Taxa de Lucro; Impostos\n--[X y z]--\n--> ");
	scanf("%f %f %f", &precoI, &percL, &percI);
	
	lucro = (precoI * percL) / 100;
	imposto = (precoI * percI) / 100;
		
	precoT = (precoI + lucro) + imposto;
	
	printf("Lucro: %.2f\nImpostos: %.2f\nValor final: %.2f", lucro, imposto, precoT );
}
