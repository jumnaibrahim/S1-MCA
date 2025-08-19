#include<stdio.h>
int main()
{
    int n,i,temp,j;
    printf("enter the size:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("%dth num:",i);
        scanf("%d",&a[i]);
    }
    printf("\narray is \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
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
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}