#include<stdio.h>
int main()
{
    //fill the code
    int year, month;
    scanf(“%d %d”,&month,&year);
    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        printf(“This month has 31 days in it”);
    else if((month == 2) && (year%4 == 0) || ((year%100 == 0) &&(year%400 == 0)))
    {
        printf(“This month has 29 days in it”);
    }
    else if(month == 2)
    {
        printf(“This month has 28 days in it”);
    }	
    else
        printf(“This month has 30 days in it“);
    return 0;
}