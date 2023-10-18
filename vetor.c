#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
# define TAM 3

int main()
{

  setlocale(LC_ALL, "portuguese");
  
  float x[TAM]

  for (int i = 0; i < TAM; i++)
  {
    x[i] = rand()%Mx;
  }
   for (int i = 0; i < TAM; i++)
  {
    printf("%d", x[i]);
  }
  int maior = x[0];
  for(int i = 1; i < TAM; i++) {
    if (x[i]>maior) maior = x[i];

  }



  return 0;
}