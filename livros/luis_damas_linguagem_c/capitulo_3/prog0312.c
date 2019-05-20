#include <stdio.h>
 
 int main (){
 
	char Est_civil;
	
	printf("Qual o estado civil? ");
	scanf("%c",&Est_civil);
	
	switch(Est_civil){
		case 'C' : printf("Casado\n"); break;
		case 's' : printf("Solteiro\n"); break;
		case 'D' : printf("Divorciado\n"); break;
		case 'V' : printf("Viúvo\n"); break;
		default : printf("Estado civil incorreto\n");
	}
 
 }
