/**
 *Escreva um programa que solicite um inteiro (entre o e 255) ao usuário e mostre o inteiro seguinte e o caractere correspondente. * 
 **/

#include<stdio.h>
int main(){
	
	int valor = 0;
	
	printf("Digite um valor entre 0 e 255: ");
	scanf("%d",&valor);
	
	printf("O número digitado foi: %d", valor);
	printf("O próximo número é %d\n", valor + 1);
	printf("O códgio ASCII do %d é %c", valor, (char) valor + 1);
	
	
	}
