#include <stdio.h>

int main()
{

  unsigned char ch = 'A';
  unsigned char mask = 127;
  unsigned char res;

  res = ch & mask;
  printf("%c", res);
}