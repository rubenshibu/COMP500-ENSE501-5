    
#include <stdio.h>
int main()
{
    char ch;
    printf("please enter an ASCII character: ");
    scanf("%c",&ch);

    if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
        printf("The entered character %c is an Alphabet",ch);
    else
        printf("The entered character %c is not an Alphabet",ch);

    return 0;
}