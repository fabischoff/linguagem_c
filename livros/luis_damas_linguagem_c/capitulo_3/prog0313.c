#include <stdio.h>
 
 int main (){
 
	char Est_civil;
	
	printf("Qual o estado civil? ");
	scanf("%c",&Est_civil);
	
	switch(Est_civil){
		case 'c' :
		case 'C' : printf("Casado\n"); break;
		case 's' :
		case 'S' : printf("Solteiro\n"); break;
		case 'd' :
		case 'D' : printf("Divorciado\n"); break;
		case 'v' :
		case 'V' : printf("Viúvo\n"); break;
		default : printf("Estado civil incorreto\n");
	}
 
 }
