#include<stdio.h>
#define MAX 5
int top;
int data[MAX];



void initialize();
int empty();
int full();
void push();
void pop();
void print();

void main()
{

    int ch;
   initialize();


   do
   {


   printf("\n*********Stack Menu**********");


   printf("\n1.PUSH OPERATION");
   printf("\n2.POP OPERATION");
   printf("\n3.PRINT OPERATION");
   printf("\n4.Exit");

   printf("\n**********************************\n");

   printf("\nEnter your choice: ");
   scanf("%d",&ch);

   switch(ch)
   {
    case 1:
    push();
    break;

    case 2:
    pop();
    break;

    case 3:
    print();
    break;

    case 4:
    printf("\nExit.....!!");
    break;

    // default:
    // printf("\nEnter Correct Key...!!");

   }
   }while(ch!=4);

   

  
}

void initialize()
{
    top=-1;
}

int empty()
{
    if(top==-1)
    {
        return (1);
    }
    else 
    {
        return (0);
    }
}

int full()
{
    if(top=MAX-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push()
{
    int x;
    if(top <= MAX -1)
    {
        printf("\nInsert Data:");
        scanf("%d",&x);
        top=top+1;
        data[top]=x;
    }

    else 
    {
        printf("\nStack Is Full!!!");
    }
}

void pop()
{
    int x;
    if(empty()==0)
    {

        x=data[top];
        top=top-1;

        printf("\nRemove The Data",x);

        
    }

    else
    {
        printf("\nStack Is Empty!!!");
    }
}

void print()
{
    int i;

    printf("\nYour Stack Data Is...");

    for(i=top;i>=0;i--)
    {
        printf("\n%d",data[i]);
    }
    
}
