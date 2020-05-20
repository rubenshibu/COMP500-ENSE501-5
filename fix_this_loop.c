#include <stdio.h>
int main() {
   int count_down = 10;
   while (count_down > 0)
   {
          printf("%d... ", count_down);
          count_down--;
   }
   printf("\n\nTimer has expired!\n");

   return 0;
}