#include <stdio.h>
#define MAX_SIZE 10
int top=-1,stack[MAX_SIZE];
void push(int n)
{
    if(top==MAX_SIZE-1)
    {
        printf("overflow");
    }
    else
    {
        top++;
        printf("enter the num:");
        scanf("%d",&n);
        stack[top]=n;
    }
}
void pop()
{
    int x;
    if(top==-1)
    {
        printf("underflow");
    }
    else
    {
        x=stack[top];
        top--;
        printf("%d\n",x);
    }
}
void display()
{
    int i;
    for(i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }
}
int main()
{
    int ch,n;
    printf("1.Push\n2.Pop\n3.Display");
    do
    {
        printf("\nenter the choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            push(n);
            break;
            case 2:
            pop();
            break;
            case 3:
            display();
            break;
            default:
            printf("invalid");
            break;
         }
    }while(ch<4);
}
