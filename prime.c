#include<stdio.h>
int main()
{
    int i,j,n,m,k,flag=0;
    printf("enter the no of rows and columns:");
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
    printf("\narray is\n");
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
            flag=0;
            for(k=2;k<a[i][j];k++)
            {
                if(a[i][j]%k==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0&&a[i][j]!=1)
            {
                printf("%d\t",a[i][j]);
            }
        }
    }
}