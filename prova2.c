#include<stdio.h>

int main(){
  unsigned char x=128;
  unsigned char mask=1; //char tem 8 bits
  unsigned char t;

  for (int i=0; i < 8; i++){
      
      t =(x >> i) & mask;
      if (t) printf("equipamento %d\n",i+1);
      //printf("%d\n",t);
  }

  return 0;
}