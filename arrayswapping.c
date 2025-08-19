#include<stdio.h>
int main()
{
    int n,i,temp;
    printf("enter the size of array:");
    scanf("%d",&n);
    int a1[n],a2[n];
    for(i=1;i<=n;i++)
    {
        printf("%dth number:",i);
        scanf("%d",&a1[i]);
    }
     for(i=1;i<=n;i++)
    {
        printf("%dth number:",i);
        scanf("%d",&a2[i]);
    }
     printf("first array is\n");
     for(i=1;i<=n;i++)
     {
        printf("%d\t",a1[i]);
     }
     printf("\nsecond array is\n");
     for(i=1;i<=n;i++)
     {
        printf("%d\t",a2[i]);
     }
     for(i=1;i<=n;i++)
     {
        temp=a1[i];
        a1[i]=a2[i];
        a2[i]=temp;
     }
     printf("\nafter swapping:\n");
     printf("array 1 is \t ");
     for(i=1;i<=n;i++)
     {
        printf("%d\t",a1[i]);
     }
     printf("\narray 2 is \t ");
     for(i=1;i<=n;i++)
     {
        printf("%d\t",a2[i]);
     }

     

}