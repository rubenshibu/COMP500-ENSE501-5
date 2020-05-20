// Power Using  a loop
#include<stdio.h>

void main()
{

int num,pow=1,ans;

printf("Enter base : ");
scanf("%d",&num);
printf("Enter the power :");
scanf("%d",&pow);
printf("\n\n %d ^ %d is same as...\n",num,pow);
ans=num;
printf("%d",num);
for(int i=1;i<pow;i++)
{
    printf("* %d ",num);
    ans=ans*num;

}
printf("which is %d",ans);


}
