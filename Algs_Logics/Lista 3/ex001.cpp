#include <stdio.h>

typedef struct{
	int idade;
	char n[20];
}Pessoa;

int main(){
	Pessoa p1;
	
	printf("Qual o nome da pessoa?\n--> ");
	gets(p1.n);
	
	printf("Qual a idade de %s?\n--> ", p1.n);
	scanf("%d", p1.idade);
	
	p1.idade<=18?(printf("De maior!")):(printf("De menor!"));
}
