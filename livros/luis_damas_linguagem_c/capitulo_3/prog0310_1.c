#include <stdio.h>
int main(){
	
	float salario = 0;
	
	printf("Qual o salário: ");
	scanf("%f",&salario);
	
	salario = salario > 1000  ? salario * 1.05 : salario * 1.07;
	
	printf("Novo salário :%.2f\n", salario);
	
	
	
	
}
