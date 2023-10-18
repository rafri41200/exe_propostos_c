#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIM 5
#define MATQTD 10

int main()
{
  float mat[DIM][DIM];

  srand(time(NULL));

  for (int k = 0; k < DIM; k++)
  {
    for (int j = 0; j < DIM; j++)
    {
      mat[k][j] = (((float)rand()) / RAND_MAX) * MATQTD; // O QUE É RANDMAX? É UMA CONSTANTE DO STDLIB
    }
  }
  for (int k = 0; k < DIM; k++)
  {
    for (int j = 0; j < DIM; j++)
    {
      printf("| ");
      printf(" %.2lf  ", mat[k][j]);
    }
    printf("\n\n");
  }
  float maior = mat[0][0];
  for (int k = 0; k < DIM; k++)
  {
    if (maior < mat[k][k])
      maior = mat[k][k];
  }
  printf("O maior número da diagonal principal é %.2lf\n", maior);

  return 0;
}