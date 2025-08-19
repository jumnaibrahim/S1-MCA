#include<stdio.h>
int main()
{
    int i,j,m,n,s=0;
    printf("enter the number of rows and columns:");
    scanf("%d%d",&m,&n);
    int a[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("a[%d][%d]th no:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\narray is \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==0||i==m-1||j==0||j==n-1)
            {
                s+=a[i][j];
                continue;
            }
        }
    }
    printf("\nsum of boundary elements: %d",s);
}