#include<stdio.h>
#include<string.h>
int main()
{
    char s1[30],s2[30];
    int res;
    printf("enter the word:");
    scanf("%s",&s1);
    strcpy(s2,s1);
    printf("\n%s",strrev(s1));
    res=strcmp(s1,s2);
    if(res==0)
    {
        printf("\nword is pallindrome");
    }
    else
    {
        printf("\nword isnt pallindrome");
    }
}
