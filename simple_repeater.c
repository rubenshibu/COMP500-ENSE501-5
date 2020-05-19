    
#include <stdio.h>
int main()
{
    char a;
int b;
printf("ASCII symbol? ");
scanf("%c",a);
printf("Repeat count? ");
scanf("%d",&b);

for(int i=0;i<=b,i++){
    printf("%c ",a);
}

    return 0;
}