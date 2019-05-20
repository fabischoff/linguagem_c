#include <stdio.h>

int main(){

	int num1, num2;
	char op;
	
	printf("Escreva uma Expressão: ");
	scanf("%d %c %d",&num1, &op, &num2);
	
	switch(op){
	
		case '+' : printf("%d + %d  = %d\n", num1, num2, num1 + num2);break;
	
		case '-' : printf("%d - %d  = %d\n", num1, num2, num1 + num2);break;
	
		case 'x' :
		case 'X' :
		case '*' : printf("%d * %d  = %d\n", num1, num2, num1 * num2);break;
	
		case ':' :
		case '\\':
		case '/' : printf("%d / %d  = %d\n", num1, num2, num1 / num2);break;
		
		
	}
	
}
