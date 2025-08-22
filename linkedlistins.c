#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* head,*temp,*newnode;
void create()
{
   // head=0;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data");
    scanf("%d",&newnode->data);
}
void insert_at_beginning(int n)
{
    create();
    newnode->next=head;
    head=newnode;
}
void insert_at_end(int n)
{
    create();
    temp=head;
    while(temp->next!=NULL)
    {
      temp=temp->next;
    }
        temp->next=newnode;
        newnode->next=NULL;
}
void insert_at_middle(int n)
{
    int pos,i;
    create();
    printf("enter the position:");
    scanf("%d",&pos);
    temp=head;
    for(i=1;i<pos;i++)
    {
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;

}
    void display()
    {
        temp=head;
        printf("%d\n",temp->data);
        while(temp->next!=NULL)
        {
            temp=temp->next;
            printf("%d\n",temp->data);

        }
    }

int main()
{
    int ch,n;
    printf("\n1.beginning\n2.end\n3.middle\n4.display");
    do
    {
        printf("\nenter the choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            insert_at_beginning(n);
            break;
            case 2:
            insert_at_end(n);
            break;
            case 3:
            insert_at_middle(n);
            break;
            case 4:
            display();
            break;
            default:
            printf("invalid");
            break;


        }
    }while(ch<5);
    return 0;
}