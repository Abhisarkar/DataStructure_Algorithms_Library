#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;

};
struct node *head;

struct node *getnewnode(int key)
{
        struct node *temp=(struct node *)malloc(sizeof(struct node));
        temp->data=key;
        temp->prev=temp->next=NULL;
        return temp;
}

void insert(int key)
{
    struct node *newnode=getnewnode(key);
    if(head==NULL)
    {
        head=newnode;
        return;
    }

    else
    {
         head->prev=newnode;
        newnode->next=head;
        head=newnode;
    }

}
void print()
{
    struct node *temp=head;
   printf("The Elements are\n");
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}


int main()
{

    head==NULL;
    insert(10);insert(20);insert(30);
    insert(40);insert(50);insert(60);
    print();
    return 0;
}
