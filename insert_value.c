#include<stdio.h>
void main()
{
    int a[100],n,i,x,y;
    printf("input total number of elements required :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("input element a[%d] is ",i);
        scanf("%d",&a[i]);
    }
    printf("\ninput a new value of insert:");
    scanf("%d",&x);
    printf("\ninput where to insert the value %d :",x);
    scanf("%d",&y);
    printf("\nafter insertion:");
    for(i=0;i<n;i++)
    {
        a[y]=x;
        printf("\nelement [i] is %d",a[i]);
    }
}