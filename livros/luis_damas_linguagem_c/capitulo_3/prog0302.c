/*
*Implemente um programa que indique se um número é positivo ( >= 0 ) ou negativo.
*/

#include<stdio.h>

int main (){
	
	int num = 0;

	printf("Digite um número:");
	scanf("%d",&num);
	
	if(num >= 0){
			printf("O número %d é positivo", num);
	}
	
	else {
			printf("O número %d é negativo", num);
	}
}
