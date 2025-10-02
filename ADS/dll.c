#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* next;
    struct node* prev;
};
struct node *head,*temp,*temp1,*new;
void create(int n)
{
    printf("enter the data: ");
    scanf("%d",&n);
    new=(struct node*)malloc(sizeof(struct node));
    new->next=NULL;
    new->prev=NULL;
    new->data=n;
}
void insert_at_beginning(int n)
{
    create(n);
    if(head==NULL)
    {
        head=new;
    }
    else
    {
        new->next=head;
        head=new;
    }  
}
void insert_at_end(int n)
{
    create(n);
    if(head==NULL)
    {
        head=new;
    }
    else
    {
        temp=head;
        while(temp->next!=0)
        {
            temp=temp->next;
        }
        temp->next=new;
        new->prev=temp;
        new->next=NULL;
    }
}
void insert_at_position(int n)
{
    int pos,i;
    create(n);
    if(head==NULL)
    {
        head=new;
    }
    else
    {
        printf("enter the position: ");
        scanf("%d",&pos);
        temp=head;
        for(i=0;i<pos-1;i++)
        {
            temp=temp->next;
        }
        temp->next->prev=new;
        new->next=temp->next;
        new->prev=temp;
        temp->next=new;
    }
}
void delete_at_beginning()
{
    temp=head;
    if(temp==NULL)
    {
        printf("list is empty\n");
    }
    else if(temp->next==NULL)
    {
        printf("deleted element is: %d\n",temp->data);
        head=NULL;
    }
    else
    {
        printf("deleted element is: %d\n",temp->data);
        temp->next->prev=NULL;
        head=temp->next;
        free(temp);
    }
}
void delete_at_end()
{
    temp=head;
    if(temp==NULL)
    {
        printf("list is empty\n");
    }
    else if(temp->next==NULL)
    {
        printf("deleted element is: %d\n",temp->data);
        head=NULL;
    }
    else if(temp->next->next==NULL)
    {
        printf("deleted element is: %d\n",temp->next->data);
        free(temp->next);
        temp->next=NULL;
    }
    else
    {
        while(temp->next->next!=0)
        {
            temp=temp->next;
        }
        printf("deleted element is: %d\n",temp->next->data);
        free(temp->next);
        temp->next=NULL;
    }
}
void delete_at_position()
{
    int pos,i;
    temp=head;
    temp1=head;
    if(temp==NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        printf("enter the position: ");
        scanf("%d",&pos);
        for(i=0;i<pos-1;i++)
        {
            temp=temp->next;
        }
        for(i=0;i<=pos;i++)
        {
            temp1=temp1->next;
        }
        if(temp->next==NULL)
        {
            printf("deleted element is: %d\n",temp->data);
            head=NULL;
        }
        else if(temp->next->next==NULL)
        {
            printf("deleted element is: %d\n",temp->next->data);
            free(temp->next);
            temp->next=NULL;
        }
        else
        {
            printf("deleted element is: %d\n",temp->next->data);
            free(temp->next);
            temp->next=temp1;
            temp1->prev=temp;
        }   
    }
}
void display()
{
    if(head==NULL)
    {
        printf("head is null so is the list\n");
    }
    else
    {
        temp=head;
        while(temp!=0)

        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }
    }
}
void search(int n)
{
    if(head==NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        int flag=0,count=0;
        printf("enter the number to search: ");
        scanf("%d",&n);
        temp=head;
        while(temp->next!=0)
        {
            if(temp->data==n)
            {
                flag=1;
                break;
            }
            temp=temp->next;
            count++;
        }
        if(flag==1)
        {
            printf("%d is found at %d\n",n,count);
        }
        else
        {
            printf("%d is not found\n",n);
        }
    }
}
void main()
{
    int ch,n;
    printf("\ninsert at \n1.beginning\n2.end\n3.position\n4.display\ndelete at\n5.beginning\n6.end\n7.position\n8.search\n");
    do
    {
        printf("enter the choice: ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            insert_at_beginning(n);
            break;
        case 2:
            insert_at_end(n);
            break;
        case 3:
            insert_at_position(n);
            break;
        case 4:
            display();
            break;
        case 5: 
            delete_at_beginning();
            break;
        case 6:
            delete_at_end();
            break;
        case 7:
            delete_at_position();
            break;
        case 8:
            search(n);
            break;
        default:
            break;
        }
    }while(ch<9);
    
}