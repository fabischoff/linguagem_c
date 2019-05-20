/*
 * Escreva um programa que coloque na tela as cinco primeiras tabuadas, parando a tela depois de cada uma delas ser escrita.
 * 
 */


#include<stdio.h>

int main(){


	for(int num = 1; num <=5 ; num ++){
		
		for (int x = 1; x <= 10 ; x++){
		
			printf("%2d X %2d = %2d\n", num, x , num*x);
			
		}
		
		if(num != 5){
		
				printf("Pressione <ENTER> para continuar");
				getchar();
		}
		
	}

	
}

