#include <stdio.h>

int main(){
	float horas, salM, salF;
	
	printf("Quantas horas trabalhada?\n--> ");
	scanf("%f", &horas);
	
	printf("Qual o salario minimo?\n--> ");
	scanf("%f", &salM);
	
	salF = ((horas / 2) * salM) - (((horas / 2) * salM) * 3) /100;
	
	printf("Salario a receber: %.2f", salF);
	 
}
