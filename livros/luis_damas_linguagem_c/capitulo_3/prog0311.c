#include <stdio.h>

int main (){
	char Est_Civ;
	puts("Qual o estado civil: ");
	Est_Civ = getchar();
	
	if(Est_Civ == 'S' || Est_Civ == 's'){
		printf("Solteiro");
	}
	else if (Est_Civ == 'C' || Est_Civ == 'c') {
		printf("Casado");						
	} 
	else if (Est_Civ == 'D' || Est_Civ == 'd'){
		printf("Divorciado");
	}
	else if(Est_Civ == 'V' || Est_Civ == 'v'){
		printf("Viúvo");
	} 
	else {
		printf("Estado civil inválido!");
	}
}
