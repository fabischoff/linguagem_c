/*
 * Implemente um programa que adiciona $1.000,00 ao salário de um indivíduo, caso este seja inferiora $100.000,00;
 */

#include<stdio.h>

	int main () {
	
	float salario = 0;
	
	printf("Digite o valor do salário:");
	scanf("%f",&salario);
	
	if(salario < 1000000){
		
			salario = salario + 1000; 
		
		}
		
		printf("Valor do salário = %.2f",salario);
	
	
	}
