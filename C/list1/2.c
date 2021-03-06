// FILE: 2.c
// LIST: first
// EXERCISE: 2
// AUTHOR: Pedro Silveira
//       
// FOR COURSE: Programming I
// DUE DATE:    April, 2019
//
// PURPOSE:
// criar vetor com 10 elementos do tipo float
// calcular o valor médio dos elementos
// imprimir os elementos do vetor que estão acima da média com suas
// respectivas posições.
//
// OVERALL METHOD:
// 1. Create c array with 10 elements
// 2. Calculate average
// 3. Get values above average and display them
//
// FUNCTIONS: in algorithm scope
//
//  INCLUDED FILES:
//  stdio.h
//
// DATA FILES: none
#include <stdio.h>
#include <stdlib.h>


int main()
{
	float c[10] = { 0 };
	float average, total = 0;
	int i;
	
	printf("Inicializando vetor com 10 valores aleartorios...\n");
   for ( i = 0; i < 10; i++ ) {
   c[i] = rand() % 70;
   total = total + c[i];
   }
   
   average = total / 10;
	printf("Média: %f \n", average);
    printf("\nElementos acima da media: \n");
  for ( i = 0; i < 10; i++ ) {
  	   if (c[i] > average) {
  		printf("Na posicao %i: \n", i);
		printf("%f \n", c[i]);
  	   } 
  }
	
return 0;
}
