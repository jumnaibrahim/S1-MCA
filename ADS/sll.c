#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* head,*temp,*temp1,*newnode;
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
void delete_at_beginning()
{ 
    if (head==NULL)
    {
        printf("head is empty");
    }
    else
    {
        temp=head;
        head=temp->next;
        printf("\ndeleted element is %d",temp->data);
        free(temp);
    }
}
void delete_at_ending()
{
    if(head==NULL)
    {
        printf("head is empty");
    }
    else
    {
        temp=head;
        while(temp->next->next!=0)
    {
        temp=temp->next;
    }
        printf("\ndeleted element is %d",temp->next->data);
        temp->next=NULL;
        free(temp->next);
    }
}
void delete_at_middle()
{
    if(head==NULL)
    {
        printf("head is empty");
    }
    else
    {
        int pos,i;
        temp=head;
        printf("enter the position");
        scanf("%d",&pos);
        for(i=0;i<pos-1;i++)
    {
        temp=temp->next;
    }
    temp1=head;
        for(i=0;i<=pos;i++)
    {
        temp1=temp1->next;
    }
        printf("\ndeleted element is %d",temp->next->data);
        free(temp->next);
        temp->next=temp1;
    }
}
void search()
{
    if(head==NULL)
    {
        printf("head is empty");
    }
    else
    {
        int a,flag=0,count=0;
        temp=head;
        printf("number you wanna search:");
        scanf("%d",&a);
        while(temp!=0)
    {
        if(a==temp->data)
        {
            flag=1;
            break;
        }
        temp=temp->next;
        count++;
    }
    if(flag==1)
    {
        printf("number is found at %dth position",count);
    }
    else
    {
        printf("number is not found");
    }
    }
}
    void display()
    {
        if(head==NULL)
        {
            printf("head is empty so is the list");
        }
        else
        {
            temp=head;
            printf("%d\n",temp->data);
            while(temp->next!=NULL)
        {
            temp=temp->next;
            printf("%d\n",temp->data);
        }
        }
    }

int main()
{
    int ch,n;
    printf("\ninsert at \n1.beginning\n2.end\n3.middle\n4.display\ndelete at\n5.beginning\n6.end\n7.postion\n8.search");
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
            case 5:
            delete_at_beginning();
            break;
            case 6:
            delete_at_ending();
            break;
            case 7:
            delete_at_middle();
            break;
            case 8:
            search();
            break;
            default:
            printf("invalid");
            break;
         }
    }while(ch<9);
    return 0;
}
