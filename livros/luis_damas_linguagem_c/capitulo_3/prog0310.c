/*FUP que calcule os aumentos de ordenado para o corrente ano. Se o ordenado for > 1000 deve ser aumentado em 5%, se não deve ser aumentado 7%
*
*/

#include<stdio.h>
int main (){
	
	float salario = 0;
	
	printf("Digite o salário: ");
	scanf("%f",&salario);
	
	if(salario > 1000){
		
		salario = salario *1.05;
	}
	else {
		
		salario = salario * 1.07;
		
	}
	printf("Novo salário: %.2f\n", salario);
	
}
1874 
