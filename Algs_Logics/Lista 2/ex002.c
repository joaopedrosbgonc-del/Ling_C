#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char nome[10], sexo, estC[10], escol;
	float tempoC;
	
	printf("Qual o nome da pessoa:\n--> ");
	scanf("%s", nome);
	
	printf("Qual o sexo? [F/M]\n--> ");
	scanf(" %c", &sexo);
	
	while(sexo != 'f' && sexo != 'F' && sexo != 'M' && sexo != 'm'){
		printf("ERRO! Escreva um sexo valido [M/F]\n--> ");
		scanf(" %c", &sexo);
	}
	printf("Qual o estado civil?\n1 para CASADO\n2 para SOLTEIRO\n--> ");
	scanf(" %c", &escol);
	
	switch(escol){
		case '1':
			strcpy(estC, "CASADO");
			break;
			
		case '2':
			strcpy(estC, "SOLTEIRO");
			break;
	}
	
	if((sexo == 'F' || sexo == 'f') && escol == '1'){
		printf("A quanto tempo de casado?\n--> ");
		scanf("%f", &tempoC);	
		printf("%s, é casada e tem %.0f anos de casamento!", nome, tempoC);
	} 
	else{
		printf("Joia");
	}
}
