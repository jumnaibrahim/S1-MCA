#include<stdio.h>
int main()
{
    int n,s=0,i;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2)
    {
        s=s+i;
    }
    printf("sum is %d",s);
}