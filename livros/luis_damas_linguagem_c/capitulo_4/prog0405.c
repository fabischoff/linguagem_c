#include<stdio.h>

int main(){
	
	int num = 1;
	
	while( num <=5){
		int n = 1;
		
		while(n <= 10){
		
			printf("%2d x %2d = %2d\n", n, num, n * num);
			n++;
		}
			printf("\n");
			num++;
			
	}
	
}

