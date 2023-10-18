//  ORDENAÇÃO BOLHA

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define VALORMIMVETOR -50
#define VETORQTD 100

int main()
{

  // GERAÇÃO DE DADOS
  int x[TAM];

  srand(time(NULL));

  for (int k = 0; k < TAM; k++)
  {
    x[k] = VALORMIMVETOR + rand() % VETORQTD;
  }
  puts("vetor gerado antes da ordenacao:");
  for (int k = 0; k < TAM; k++)
  {
    printf("[%p] %d\n", &x[k], x[k]);
  }

  for (int k = 0; k < TAM - 1; k++)
  {
    for (int j = 0; j < TAM - 1; j++)
    {
      if (x[j] > x[j + 1])
      {
        x[j] = x[j] ^ x[j + 1];
        x[j + 1] = x[j] ^ x[j + 1];
        x[j] = x[j] ^ x[j + 1];
      }
    }
  }
  puts("vetor gerado depois da ordenacao:");
  for (int k = 0; k < TAM; k++)
  {
    printf("[%p] %d\n", &x[k], x[k]);
  }
  /* int N1, N2;
   int num[6] = {10,21,2,3,4,1};

   for (size_t i = 0; i < count; i++)
   {
      if (num[i] < num[i+1]) num[i]
   }

   if (num[i] < num[i+1]*/

  return 0;
}