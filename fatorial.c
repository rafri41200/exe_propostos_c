#include <stdio.h>

int main()
{

  int f, n;
  puts("me de um numero: ");
  scanf("%d", &n);

  for (f = 1; n > 1; n--)
    f *= n;
  //{
  // f *= n; // f = f * n;
  //}

  printf("resultado do fatorial: %d\n", f);

  return 0;
}