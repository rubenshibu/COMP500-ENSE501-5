#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
   int n=5;
   max=7;
   int num, c;

   randomize();

   for (c = 1; c <= n; c++)
   {
      num = random(max);
      printf("%d\n",num);        
   }

   getch();
   return 0;
}