#include<stdio.h>

int main(){
	
	int x = 1;
	int n;
	
	printf("Digite um número:");
	scanf("%d",&n);
	
	
		
	while (x <= 10){
		
			printf("%2d X %2d = %2d\n",n,x, x*n);
			x++; 
	}
	
}

