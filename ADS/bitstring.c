#include <stdio.h>
void bit1(int U[],int S1[],int n,int n1,int B1[])
{
    int i,j,flag=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n1;j++)
        {
            if(S1[j]==U[i])
            {
                B1[i]=1;
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            B1[i]=0;
        }
        flag=0;
    }
    printf("\n");
    printf("subset 1 in bitstring : ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",B1[i]);
    }
}
void bit2(int U[],int S2[],int n,int n2,int B2[])
{
    int i,j,flag=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(S2[j]==U[i])
            {
                B2[i]=1;
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            B2[i]=0;
        }
        flag=0;
    }
    printf("\n");
    printf("subset 2 in bitstring : ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",B2[i]);
    }
}
void Union(int B1[],int B2[],int n)
{
    int i,Union[n];
    for(i=0;i<n;i++)
    {
        if(B1[i]==1||B2[i]==1)
        {
            Union[i]=1;
        }
        else
        {
            Union[i]=0;
        }
    }
    printf("\n");
    printf("Union : ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",Union[i]);
    }
}
void Intersection(int B1[],int B2[],int n)
{
    int i,Intersection[n];
    for(i=0;i<n;i++)
    {
        if(B1[i]==0||B2[i]==0)
        {
            Intersection[i]=0;
        }
        else
        {
            Intersection[i]=1;
        }
    }
    printf("\n");
    printf("Intersection : ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",Intersection[i]);
    }

}
int main()
{
    int n,n1,n2,i,j;
    printf("enter the size of universal set : ");
    scanf("%d",&n);
    int U[n];
    for(i=0;i<n;i++)
    {
        printf("enter the %dth element : ",i+1);
        scanf("%d",&U[i]);
    }
    label:
    printf("enter the size of subset 1 : ");
    scanf("%d",&n1);
    if(n1>n)
    {
        printf("invalid size\n");
        goto label;
    }
    int S1[n1];
    int flag=0;
    for(i=0;i<n1;i++)
    {
        a:
        printf("enter the %dth element : ",i+1);
        scanf("%d",&S1[i]);
        for(j=0;j<n;j++)
        {
            if(S1[i]==U[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("not an element of the universal set\n"); 
            goto a;
        }
        flag=0;
    }
    label1:
    printf("enter the size of subset 2 : ");
    scanf("%d",&n2);
    if(n2>n)
    {
        printf("invalid size\n");
        goto label1;
    }
    int S2[n2];
    for(i=0;i<n2;i++)
    {
        b:
        printf("enter the %dth element : ",i+1);
        scanf("%d",&S2[i]);
        for(j=0;j<n;j++)
        {
            if(S2[i]==U[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("not an element of the universal set\n");
            goto b;
        }
        flag=0;
    }
    printf("Universal set is : ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",U[i]);
    }
    printf("\n");
    printf("subset 1 is : ");
    for(i=0;i<n1;i++)
    {
        printf("%d\t",S1[i]);
    }
    printf("\n");
    printf("subset 2 is : ");
    for(i=0;i<n2;i++)
    {
        printf("%d\t",S2[i]);
    }
    int B1[n],B2[n];
    bit1(U,S1,n,n1,B1);
    bit2(U,S2,n,n2,B2);
    Union(B1,B2,n);
    Intersection(B1,B2,n);


}