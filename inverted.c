#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter a number:");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf("*\t");
        }
        printf("\n");
    }

}