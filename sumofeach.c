#include<stdio.h>
int main()
{
    int i,j,n,m,s,c;
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
        s=0;
        c=0;
        for(j=0;j<n;j++)
        {
            s+=a[i][j];
            c+=a[j][i];
        }
        printf("\nsum of %dth row:%d",i+1,s);
        printf("\nsum of %dth column:%d",i+1,c);
    }
}