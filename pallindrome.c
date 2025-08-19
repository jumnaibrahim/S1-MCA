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
    //comment
     for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]>a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\nsorted array is \n");
}