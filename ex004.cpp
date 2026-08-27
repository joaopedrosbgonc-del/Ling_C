#include <stdio.h>

int main(){
	float media, soma, nota;
	int i;
	
	for(i=1;i<=3;i++){
		printf("Qual a nota %d?\n--> ", i);
		scanf("%f", &nota);
		
		soma += nota;
	}
	media = soma / 3;
	printf("A media aritmetica eh de: %.1f", media);
}
