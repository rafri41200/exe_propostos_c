#include <stdio.h>

int main()
{

  int n, maior;

  puts("digite um número:");
  scanf("%d", &n);

  maior = n;

  while (n != 0)
  {
    if (n > maior)
      maior = n;
    printf(" o maior numero is: %d\n", maior);
    puts("digite um número:");
    scanf("%d", &n);
  }
  puts("Tchau\n");

  return 0;
}