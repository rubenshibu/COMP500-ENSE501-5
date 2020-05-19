    
#include <stdio.h>
int main()
{
int a,b,c;
printf("Count down start? ");
scanf("%d",&a);
printf("Count down end? ");
scanf("%d",&b);
printf("step size? ");
scanf("%d",&c);
for(int i=a;i>=b;i-c){
    printf("%d, ",i);
}

    return 0;
}