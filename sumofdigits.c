#include <stdio.h>
int digits(int);
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    digits(n);
}
int digits(int x)
{
    int rem,sum=0;
    while(x!=0)
    {
        rem=x%10;
        sum+=rem;
        x/=10;
    }
    if(sum>9)
    {
        x=sum;
        sum=0;
        digits(x);
    }
    else
    {
        printf("sum is %d",sum);
    }
    
}