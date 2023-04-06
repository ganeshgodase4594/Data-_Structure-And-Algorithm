#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;

node *create(int);
void display(node*);

int main()
{

    node *Head;
    int no ;
    printf("\nEnter the number of element you want to insert: ");
    scanf("%d",&no);
    Head = create(no);
    display(Head);
}

node *create(int no)
{
    int x;

    node *newnode,*Head;
    node *p;
   
    Head = NULL;
    for(int i=0;i<no;i++)
    {
        printf("\nEnter the data: ");
        scanf("%d",&x);
        newnode = (node*)malloc(sizeof(node));
        newnode->data=x;
        newnode->next=NULL;

        if (Head==NULL)
        {
            Head=newnode;

        }

        else
        {
           
            p= Head;

            while(p->next!=NULL)
            {
                p=p->next;
            }
            p->next=newnode;
        }

    }
    return Head;
}

void display(node *Head)
{
    node *p;
    p=Head;

    while (p!=NULL)
    {
        printf("%d\n",p->data);
        p=p->next;
    }
    
}
