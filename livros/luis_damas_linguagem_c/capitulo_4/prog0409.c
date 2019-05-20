/*
 * Escreva um programa que apresente um menu com as opções Clientes, Fornecedores, Encomendas e Sair
 * 
 */


#include<stdio.h>

int main(){


	char opcao;
	
	do {
		
		printf("tMENU PRINCIPAL");
		printf("\n\n\n\tClientes");
		printf("\n\n\n\tFornecedores");
		printf("\n\n\n\tEncomendas");
		printf("\n\n\n\tSair");
		printf("\n\n\n\tOpção");
		
		scanf(" %c", &opcao);
		fflush(stdin); //Limpaar buffer do teclado
		
		switch(opcao){
		
			case 'c':
			case 'C': puts("Opção CLIENTES"); break;
			case 'f':
			case 'F': puts("Opção FORNECEDORES"); break;
			case 'e':
			case 'E': puts("Opção ENCOMENDAS"); break;
			case 's':
			case 'S': puts("Opção SAIR"); break;
			default : puts("Opção INVÁLIDA!!!");
						
		}
		getchar();//Parar a tela
		
	}while(opcao != 's' && opcao != 'S');


	
}

