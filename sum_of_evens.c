#include <stdio.h>

int main()
{
    int i, n, sum=0;

    /* Input upper limit from user */
    printf("Enter a non-negative whole number: ");
    scanf("%d", &n);

    for(i=2; i<=n; i+=2)
    {
        /* Add current even number to sum */
        sum += i;
        
    }

    printf("Sum of all even number between 1 to %d = %d", n, sum);

    return 0;
}