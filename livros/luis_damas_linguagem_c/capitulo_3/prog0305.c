/*
 * Escreva um programa que leia dois números e os apresente por ordem crescente
 */


#include<stdio.h>

int
main ()
{

  int num1, num2;

  printf ("Digite dois números:");
  scanf ("%d%d", &num1, &num2);

  if (num1 > num2)
    {
      printf ("Os número em ordem crescente: %d %d ", num2, num1);

    }
  else
    {
      printf ("Os número em ordem crescente: %d %d ", num1, num2);

    }

}
