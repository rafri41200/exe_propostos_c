#include<stdio.h>

#define N_EVENT 3

int main (){
  
  int c,p;
  float t_total=0;
  
  for (int i=0; i< N_EVENT; i++){
      printf("entre com o tmepo de cpu do evento %d; \n", i+1);
      scanf("%d",&c);
      printf("entre com o periodo do evento %d; \n", i+1);
      scanf("%d",&p);

      t_total += ((float)c) / p;
  }

  (t_total>1)?puts("nao ecalonavel tempo total %.2f ", t_total): puts("escalonavel");
  



  return 0;
}