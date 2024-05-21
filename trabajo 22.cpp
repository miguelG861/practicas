#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int sum=0,x;
    char frase[50];
   
    printf("Introduzca una frase: ");
    gets(frase);
   
    for(x = 0;x < 50;x++)
    {
      if (frase[x]>=65 && frase[x]<=90)
      {
       sum++;
      }
    }
   
    printf("\n\nEn la frase hay %d mayúsculas\n\n",sum);
   
    printf("\n\n");
   
    system("PAUSE");     
    return 0;
}
