#include <stdio.h>
int main(void) {
   int counter = 1;
   int max = 10;
   for (; counter < max; ++counter)
   {
      printf("%d... ", counter);
   }
   printf("\n\nLooping done!\n");

   return 0;
}