#include<stdio.h>
int main()
{
    int i,j,m,n,flag=0;
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
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\ntranspose is \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]!=a[j][i])
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        break;
    }
    if(flag==0)
    {
        printf("since array and its transpose are same,this is a symmetric square matrix");
    }
    else
    {
        printf("not symmetric");
    }


}