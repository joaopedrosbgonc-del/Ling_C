#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int A, B, C;
	
	printf("Escrava o valor de A, B e C\n--> ");
	scanf("%d %d %d", &A, &B, &C);
	
	if((A + B) < C){
		printf("A soma de A e B é menor que C");
	}else{
		printf("A soma de A e B eh maior que C");
	}
}
