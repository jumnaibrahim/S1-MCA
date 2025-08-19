#include<stdio.h>
int main()
{
    int n,i,count=0;
    printf("enter the size of array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("%dth num: ",i);
        scanf("%d",&a[i]);
    }
    printf("\narray is\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\neven numbers in the array are:\n");
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            printf("%d\t",a[i]);
            count++;
        }
    }
    printf("\nnumber of even numbers is %d",count);
}