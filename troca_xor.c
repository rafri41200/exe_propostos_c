#include <stdio.h>

int main()
{

   unsigned int x = 11; // 1011tanto faz eu colocar o int como não. se eu não coloco ele subentende que é int
   unsigned int y = 7;  // 0111

   x = x ^ y; // x = 1100
   y = x ^ y; // y = 1011
   x = x ^ y; // x = 0111

   printf("x = %u\n y = %u\n", x, y);

   return 0;
}