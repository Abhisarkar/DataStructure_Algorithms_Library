#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *top;

void push(int key)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp -> data = key;
    temp -> next = NULL;

    if(top == NULL)
    {
        top = temp;
        top -> next == NULL;
    }
    else
    {
        temp ->next = top;
        top = temp;
    }
}

void pop()
{
    if(top == NULL)
    {

        return;
    }
    else
    {
        top = top->next;
    }
}

void display()
{
    struct node *temp = top;
    if(temp != NULL)
    {
        printf("The Stack Elements are : ");

        while(temp != NULL )
        {
             printf("%d\t",temp -> data);
             temp = temp -> next;
        }
        printf("\n\n");
    }
    else
    {
        printf("The Stack Empty Scenerio\n");
    }
}

int main()
{
    top = NULL;
    int i;
     int key;
    while (1)
    {


    printf("Enter 1:Push \t2:Pop\t 3:display  : \n");
    scanf("%d",&i);
    switch(i)
    {

        case 1 : printf("Enter the key to be Pushed : ");
            scanf("%d",&key);
            printf("\n");
            push(key);
            display();
            break;
        case 2 : pop();
                display();
                break;
        case 3 : display();
                break;


    }

    }
    return 0;
}
