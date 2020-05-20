#include <stdio.h>
int main(void) {
   int looping = 10;
   while (looping > 0)
   {
      printf("%d... ", looping);
      --looping;
   }
   printf("\n\nLooping done!\n");

   return 0;
}