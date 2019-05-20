/*
* Implemente um programa que indique se o inteiro é zero ou não
*/

#include<stdio.h>

int main (){
	
	int num = 0;
	
	printf("Digite um número:");
	scanf("%d",&num);
	
	if(num){
		printf("O número digitado é diferente de zero\n");
	}
	else
		printf("O número digitado é zero\n");
	

}
