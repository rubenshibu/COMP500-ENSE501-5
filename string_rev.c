#include<stdio.h>
#include<string.h>
int main(){
    char str[100],revstr[100];
    int i,j,temp;
    printf("please enter the string: ");
    gets(str);
    j=0;
    tem=strlen(str);
    for(i=tem-1;i>=0;i--){
        revstr[j++]=str[i];
    }
    revstr[i]='\0';
    printf("%s Reversed \n",revstr);
    return 0;
}