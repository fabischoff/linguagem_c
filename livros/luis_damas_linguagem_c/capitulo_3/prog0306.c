/*
 * Escreva um programa que solicite um salário ao utilizador e mostre o imposto a pagar 
 * - Se o salário for negativo ou zero, mostre o erro respectivo
 * - Se o salário for maior que 1000, pagar 10% de imposto, senão pagar apenas 5%
 */


#include <stdio.h>
int main (){
		float salario = 0;
		
		printf("Digite o salário: ");
		scanf("%f",&salario);
		
		if(salario < 0){
				printf("Salário: Valor inválido\n");
			}
		else
			
			if(salario > 1000)
				printf("Imposto = %.2f\n", salario * .1);
			else
				printf("Imposto = %.2f\n", salario * 0.05);
	}

