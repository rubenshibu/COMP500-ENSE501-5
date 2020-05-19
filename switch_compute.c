#include <stdio.h>

int main(void)
{
    int num = 0;
    int n,l,r;
    printf("Operator? ");
    scanf("%d", &n);
    printf("Left Operand? ");
    scanf("%d",&l);
        printf("Right Operand? ");
    scanf("%d",&r);


        switch(n)
        {
            case +: 
                printf("computing %d + %d ",l,r);
                printf("Result: %d",l+r);
                break;
            case -: 
                printf("computing %d - %d ",l,r);
                printf("Result: %d",l-r);            
                break;
            case *: 
                printf("computing %d * %d ",l,r);
                printf("Result: %d",l*(r));
                                break;
            case /: 
                printf("computing %d / %d ",l,r);
                printf("Result: %d",l/r);
                break;
            case %: 
                               printf("computing %d % %d ",l,r);
                printf("Result: %d",l%r);
                break;
        }
        
    

    return 0;
}