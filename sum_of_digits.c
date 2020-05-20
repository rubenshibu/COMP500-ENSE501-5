//sum of digits
#include<stdio.h>
void main()
{
int num,sum=0;
printf("Enter non-negative whole mumber : ");
scanf("%d",&num);
for(;;)
{
  if(num%10>0)
  {
        sum=sum+num%10;
        num=num/10;
  }
  else
    break;
}

printf("The sum of the digits entered is : %d",sum);
}
