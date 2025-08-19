#include<stdio.h>
int main()
{
    int n,rem,sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    label:
    while(n!=0)
    {
        rem=n%10;
        sum+=rem;
        n/=10;
    }
    if(sum>9)
    {
        n=sum;
        sum=0;
        goto label;
    }
    else
    {
        printf("sum is %d",sum);
    }
}