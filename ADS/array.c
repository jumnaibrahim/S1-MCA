#include<stdio.h>
#define max 7
int a[max],i,n=5;
void create()
{
    for(i=0;i<n;i++)
    {
        printf("%dth pos:",i);
        scanf("%d",&a[i]);
    }
}
void insert()
{
    int pos,val;
    printf("\nenter the position nd value: ");
    scanf("%d%d",&pos,&val);
    if(pos<0||pos>=max)
    {
        printf("\ninvalid index");
        goto c;
    }
    for(i=n;i>pos;i--)
    {
        if(n==max)
        {
            printf("\narray is full");
            break;
        }
        else
        {
            a[i]=a[i-1];
        }
    }
    c:
    if(n<max&&0<=pos<max)
    {
        a[pos]=val;
        n++;
    }
}
void delete()
{
    int pos;
    printf("\nenter the position: ");
    scanf("%d",&pos);
    printf("\ndeleted element is %d",a[pos]);
    for(i=pos;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    n--;
}
void search()
{
    int flag=0,b;
    printf("\nenter the number to be searched: ");
    scanf("%d",&b);
    for(i=0;i<n;i++)
    {
        if(a[i]==b)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("\n%d is found at %d",b,i);
    }
    else
    {
        printf("\n%d is not found",b);
    }

}
void display()
{
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
int main()
{
    int ch;
    printf("\n1.create\n2.insert\n3.delete\n4.search\n5.display\n");
    do{
        printf("\nenter the choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            create();
            break;
            case 2:
            insert();
            break;
            case 3:
            delete();
            break;
            case 4:
            search();
            break;
            case 5:
            display();
            break;
            default:
            printf("\ninvalid");
            break;
        }
    }while(ch<6);
}