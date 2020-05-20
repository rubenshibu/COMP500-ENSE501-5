#include<stdio.h>
void main()
{
int a[20],h,l,avg,s=0,i;
printf("input runs scored by each batsman:\n");
for(i=1;i<=11;i++)
{
    printf("batsman %d ? ",i);
    scanf("%d",&a[i]);
}
printf("\t\tBatting Summary:\n\t\t---------------\n");
h=a[11];
l=a[0];
for(i=1;i<=11;i++)
{
    printf("batsman %d : %d runs\n",i,a[i]);
    if(h<a[i])
        h=a[i];
    if(a[i]<l)
         l=a[i];
    s=s+a[i];
}
avg=s/11;
printf("\nHiggest score : %d",h);
printf("\nLowest score : %d",l);
printf("\nAverage score : %d",avg);
}