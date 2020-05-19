
       #include<stdio.h>
       #include<conio.h>
       void main()
       {

              int n1,n2,sum;
              clrscr();
              
              printf("\nFirst number? "); 
              scanf("%d",&n1);

              printf("\nSecond number? "); 
              scanf("%d",&n2);
              
              if(n1 > n2)              
                     printf("\nThe largest of %d and %d is %d",n1,n2,n1);
              else
                     printf("\nThe largest of %d and %d is %d",n1,n2,n2);

              getch();
       }
       