//Begin ,end ,step
#include<stdio.h>

void main()
{

int begin,end,step;

printf("Begin at? ");
scanf("%d",&begin);

printf("end at? ");
scanf("%d",&end);

printf("Step size? ");
scanf("%d",&step);
printf("%d",begin);

for(int i=begin+step;i<=end;i=i+step)
    printf(", %d",i);

}
