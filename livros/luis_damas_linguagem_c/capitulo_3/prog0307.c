/*
* Escreva um programa que calcule o salário bruto, o líquido e o imposto a pagar seguindo a seguinte regra:
* Salário				Taxa
* < 1000				 5%
* >= 1000 e < 5000		 11%
* >= 5000				 35%
*/


#include<stdio.h>
	
	int main(){
			
			float salario = 0;
			printf("Digite o salário: ");
			scanf("%f",&salario);
			
			if(salario <=  0){
					printf("Sálário inválido.");
			}
			else {
				
					if (salario < 1000){
						printf("Salário bruto 	= %.2f\n", salario);
						printf("Imposto a pagar = %0.2f\n", (salario * .05));
						printf("Salário líguido = %.2f", salario - (salario * .05));
					}
					else if(salario >= 1000 && salario < 5000){
						printf("Salário bruto 	= %.2f\n", salario);
						printf("Imposto a pagar = %0.2f\n", (salario * .11));
						printf("Salário líguido = %.2f", salario - (salario * .11));
					}
					else if(salario >= 5000){
						printf("Salário bruto 	= %.2f\n", salario);
						printf("Imposto a pagar = %0.2f\n", (salario * .35));
						printf("Salário líguido = %.2f", salario - (salario * .35));
						
						}
			}
			
		}
		
		
		
