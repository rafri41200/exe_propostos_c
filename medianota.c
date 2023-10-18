#include <stdio.h>
#include <locale.h>
# define QTD 3

int main()
{
  setlocale(LC_ALL, "portuguese");
  
  float notas[QTD];
  float media, soma = 0;

  for (int i = 0; i < QTD; i++)
  {
    printf("digite sua %dº nota\n", i+1);
    scanf("%f", &notas[i]);
  }
  for( int i=0; i<QTD; i++){

    soma += notas[i];
  }

  media = soma / QTD;

  (media >= 7.0) ? puts("você passou!") : puts(" foi reprovado");

  return 0;
}