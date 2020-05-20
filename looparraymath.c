#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],i,sum;
	float multi=1;
	char b;
	printf("Input five whole numbers\n");
	for(i=0;i<5;i++)
	{
		printf("enter the number %d:",i+1);
		scanf("%d",&a[i]);
	}
	printf("would you like to sum or multiply the elements (s)-sum (m)-mulitply\n");
	scanf("%c",&b);
	
	switch(b)
	{
	case 's': 	
	    for(i=0;i<5;i++)
	    sum=sum+a[i];
	    printf("sum of the elements=%d",sum);
    break;
	

    case 'm':
    	for(i=0;i<5;i++)
		multi=multi*a[i];
	    printf("product of the elements=%d",multi);
	break;
	default:
	    printf("wrong option");
    }
	getch();
	return 0;
    
}