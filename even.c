#include <stdio.h>
int main() {
    int num;
    printf("Enter an even number: ");
    scanf("%d", &num);

    // True if num is perfectly divisible by 2
    if(num % 2 == 0)
        printf("Well done, that was an even number");
    else
        printf("sorry, that was not an even number");
    
    return 0;
}