#include <stdio.h>
#define MAX_SIZE 5
int r=-1,f=0,queue[MAX_SIZE];
void enqueue(int n)
{
    if(r==MAX_SIZE-1)
    {
        printf("overflow");
    }
    else
    {
        r++;
        printf("enter the num u wanna enqueue:");
        scanf("%d",&n);
        queue[r]=n;
    }
}
void dequeue()
{
    int x;
    if(f==-1)
    {
        printf("underflow");
    }
    else if(f==r)
    {
        printf("%d",queue[f]);
        f=-1;
    }
    else
    {
        x=queue[f];
        f++;
        printf("%d",x);

    }
}
void display()
{
    int i;
    for(i=f;i<=r;i++)
    {
        printf("%d\n",queue[i]);
    }
}
int main()
{
    int ch,n;
    printf("1.Enqueue\n2.Dequeue\n3.Display");
    do
    {
        printf("\nenter the choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            enqueue(n);
            break;
            case 2:
            dequeue();
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