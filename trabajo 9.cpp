#include <stdio.h>
#include <stdlib.h>

int main()
{
  int aux, numeros1[5],numeros2[5];
  int i,j;

  for (i=0;i<5;i++){
                    printf("Escriba un número");
                    scanf("%d",&numeros1[i]);
      }
     
  for(i=0;i<5;i++)
  {
   numeros2[i]=numeros1[i]*2;
  }
 
  for (i=0;i<5;i++){
      printf("%d\n",numeros2[i]);
  }
     
  system("PAUSE");     
  return 0;
}