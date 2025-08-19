#include<stdio.h>
int main()
{
    int s,u,i,top=0;
    printf("enter:");
    scanf("%d",&s);
    int stack[s];
    for(i=0;i<s;i++)
    {
        scanf("%d",&stack[i]);
        top++;
    }
    push(17);
    push(19);
    printf("\npopped out is %d",pop(u));
    printf("\npopped out is %d",pop(u));

}
void push(int a)
{
    int s,top;
    int stack[s];
    if(top==s-1)
    {
        printf("overflow");
    }  
    else
    {
        top=top+1;
        stack[top]=a;
    }
}
int pop(int b)
{
    int s;
    if(top==-1)
    {
        printf("underflow");
    }
    else
    {
        b=stack[top];
        top=top-1;
        return b;
    }
}