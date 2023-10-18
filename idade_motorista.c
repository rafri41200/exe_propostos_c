#include <stdio.h>

int main()
{
   int idade;

   printf("qual a sua idade?\n");
   scanf("%d",&idade);

   if (idade<16)
   {
    printf("voce n pode votar e dirigir\n");
   }else if (idade<18) //((idade>=16) && (idade<18))
   {
    printf("voce pode votar e n dirigir\n");
   }else{
    puts("pode votar e dirigir");
   } 
   
   
}