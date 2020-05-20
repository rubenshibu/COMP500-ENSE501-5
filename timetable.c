
//times table

#include<stdio.h>

void main()
{

int num;

printf("> ");
scanf("%d",&num);
for(int i=0;i<=12;i++)
{
    printf("%d x %d = %d\n",num,i,num*i);
}


}
