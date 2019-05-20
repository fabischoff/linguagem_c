/*
 * Escreva um programa que calcule a soma e o produto dos n primeiros números naturais
 * 
 */


#include<stdio.h>

int main(){
	
	int valor = 0;
	
	printf("Digite um número:");
	scanf("%d",&valor);
	
	int total_soma = 0;
	int total_mult = 1;
		
	for (int n = 1 ; n <= valor ; n++){
		
		total_soma = total_soma + n;
		total_mult = total_mult * n;
	
	}
	
	printf("A soma dos 10 números naturais é = %2d\n", total_soma);
	printf("A mult dos 10 números naturais é = %2d", total_mult);
	
	
}

