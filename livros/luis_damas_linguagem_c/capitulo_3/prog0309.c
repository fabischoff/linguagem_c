/*
 *Escreva um programa que aplique uma taxa de imposto de 10% aos solteiros de 9% aos casados. 
*/  
 
#include<stdio.h>

int main (){
	
	float salario = 0 ;
	char est_civil;
	
	printf("Qual o salário: ");
	scanf("%f",&salario);
		
	printf("Qual o estado civil?");
	scanf(" %c",&est_civil);
	
	if(est_civil == 'c' || est_civil == 'C'){
		printf("Imposto: %.2f\n", salario * .09);
	}
	else {
		if(est_civil == 's' || est_civil == 'S'){
			printf("Imposto: %.2f\n", salario * .1);
		}
		else {
			printf("Estado civil incorreto.");
		}
	}
	
	
	
	
	
	}
	
	
 
 
 
 
  
 
 
 
