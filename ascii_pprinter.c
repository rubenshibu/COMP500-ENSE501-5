
//ASCII printer
#include<stdio.h>

void main()
{
int begin,end;
char val;

printf("Low: ");
scanf("%d",&begin);

printf("High:");
scanf("%d",&end);

for(int i=begin;i<=end;i++)
{
    printf("\nASCII '%d' is ",i);
    val=i;
    printf("%d",val);

}


}
