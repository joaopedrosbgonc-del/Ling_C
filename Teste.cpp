# include <stdio.h>

int main(){
	
	float n1, n2, soma, media;
	
	printf("Digite a primeira nota:\n--> ");
	scanf("%f", &n1);
	while(n1 < 0 || n1 > 10){
		printf("ERROR! Digite uma nota válida!\n--> ");
		scanf("%f", &n1);
	}
	
	printf("Digite a primeira nota:\n--> ");
	scanf("%f", &n2);
	while(n2 < 0 || n2 > 10){
		printf("ERROR! Digite uma nota válida!\n--> ");
		scanf("%f", &n2);
	}
	
	soma = n1 + n2;
	media = soma/2;
	
	printf("A média das notas é de %.1f\n", media);
	
	if (media >= 6){
		printf("Aprovado\n");
	}else{
		printf("Reprovado\n"); 
		
	}

	return 0;
}
