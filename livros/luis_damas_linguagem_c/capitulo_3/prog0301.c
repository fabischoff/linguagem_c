/**
 * Implemente um programa em c que solicite ao utilizador dois inteiros e em seguida aplique todos os operadores relacionais de C ao inteiros lidos. 
 * 
 **/

#include<stdio.h>

int main () {
	
	int num1, num2;
	num1 = num2 = 0;
	
	printf("Digite dois números:");
	scanf("%d%d",&num1,& num2);
	
	printf("O resultado %d == %d : %d\n", num1, num2, num1 == num2);
	
	printf("O resultado %d > %d : %d\n", num1, num2, num1 > num2);
	
	printf("O resultado %d < %d : %d\n", num1, num2, num1 < num2);
			
	printf("O resultado %d >= %d : %d\n", num1, num2, num1 >= num2);
	
	printf("O resultado %d <= %d : %d\n", num1, num2, num1 <= num2);
	
	printf("O resultado %d != %d : %d\n", num1, num2, num1 != num2);
	
	
	
}



