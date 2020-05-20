//Factorial loop
#include<stdio.h>

void main()
{
int num,fact=1;

printf("Enter a non negative whole number : ");
scanf("%d",&num);
for(int i=1;i<=num;i++)
    fact=fact*i;
printf("%d! is %d",num,fact);
}

