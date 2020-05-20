#include<stdio.h>
char rank(char rank, char suit[20]);
int main(void){
  while(1){
    
  char c, a;
    printf("\nSuit (d/h/s/c): ");
    scanf(" %c",&c);
    printf("\nRank (A/2/3/4/5/6/7/8/9/10/J/Q/K): ");
    scanf(" %c",&a);
    
    switch(c){
    case 'd': rank(a, "Diamond");break;
    case 'h': rank(a, "Hearts");break;
    case 's': rank(a, "Spades");break;
    case 'c': rank(a, "Clubs");break;
    default: printf("Please Enter a  valid choice");break;
  }
}
    }
    
 char rank(char rank, char suit[20]){
   
  switch(rank){
  case 'A': printf("Ace of %s", suit);break;
  case '2': printf("two of %s", suit);break;
  case '3': printf("three of %s", suit);break;
  case '4': printf("four of %s", suit);break;
  case '5': printf("five of %s", suit);break;
  case '6': printf("six of %s", suit);break;
  case '7': printf("seven of %s", suit);break;
  case '8': printf("eight of %s", suit);break;
  case '9': printf("nine of %s", suit);break;
  case 'J': printf("Jocker of %s", suit);break;
  case 'Q': printf("Queen of %s", suit);break;
  case 'K': printf("King of %s", suit);break;

  }
  
 return 0;
 
 }