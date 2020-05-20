
//N avg
#include<stdio.h>

void main()

{
int get,avg=0,i=0;

while(get!= -1)
{
    printf("Number (-1 to stop)? ");
    scanf("%d",&get);
    if(get>=0)
    {
    avg=avg+get;
    i++;
    get=0;
    }
    else if(get== -1)
        break;
}
avg=avg/i;
printf("The average of the %d number is %d",i,avg);

}
