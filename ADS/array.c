#include<stdio.h>
int n=5,i;
void create()
{
    // printf("enter the size of array:");
    // scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("%dth pos:",i);
        scanf("%d",&a[i]);
    }
}
void display()
{
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
int main()
{
    create();
    display();
}