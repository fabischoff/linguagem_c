#include<stdio.h>

int main(){
	
	char ch;
	printf("Introduza um caractere: ");
	scanf("%c", &ch);
	printf("O carectere '%c' tem o ASCII número %d\n", ch, (int)ch);
	
	}
