#include <stdio.h>

int main()
{
  int x;

  puts("digite um númeo\n");
  scanf("%d", &x);

  if (x % 2)
  { //(x%2)?puts("impar"):puts("par; -o") // y = (x%2)?x*3: x*2;
    puts("impar\n");
  }
  else
  {
    puts("par\n");
  }
  return 0;
}