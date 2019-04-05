#include<stdio.h>
#include<math.h>
int main (){
	
	float raio, perimetro;
	double pi = 3.1415927, area;
	
	printf("Introduzao raio da circunfêrencia: ");
	scanf("%f",&raio);
	
	perimetro = 2 * pi * raio;
	area = pi * (raio * raio);
	
	printf("A área é igual a: %0.2f e o perímetro é igual a %.2f", area, perimetro);
	
	}
