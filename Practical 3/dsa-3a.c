// Write a program to implement the concept of Stack with Push, Pop, Display and Exit operations.

#include<stdio.h>
#include<stdlib.h> 
#define MAXSIZE 5 

struct stack
{
    int stk[MAXSIZE]; 
    int top; 
};
typedef struct stack ST;
ST s;

/*Function to add an element to stack*/ 
void push()
{
    int num;
    if(s.top == (MAXSIZE-1))
    {
        printf("stack is full\n");
    }
    else
    {
        printf("\nEnter the element to be pushed:"); 
        scanf("%d",&num); 
        s.top=s.top+1;
        s.stk[s.top]=num;
    }

    return;
}

/*Function to delete an element from stack*/ 
int pop()
{
    int num;
    if(s.top==-1)
    {
        printf("Stack is Empty\n");
    }
    else
    { 
        num=s.stk[s.top]; 
        printf("poped element is=%d\n",s.stk[s.top]); 
        s.top=s.top-1;
    }

    return(num);
}
    
/*Display the status of stack*/ 
void display()
{
    int i; 
    if(s.top==-1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("\nStatus of elements in stack:\n"); 
        for(i=s.top;i>=0;i--)
        {
            printf("%d\n",s.stk[i]);
        }
    }
}

int main()
{
    int ch;
    s.top=-1; 
    printf("\tSTACK OPERATIONS\n");
    printf("--------------------------------\n");
    printf(" 1.PUSH\n"); 
    printf(" 2.POP\n"); 
    printf(" 3.DISPLAY\n"); 
    printf(" 4.EXIT\n"); 
    while(1)
    {
        printf("\nChoose operation:"); 
        scanf("%d",&ch); 
        switch(ch)
        {
            case 1: push(); 
                break; 
            case 2: pop(); 
                break; 
            case 3: display(); 
                break; 
            case 4: exit(0); 
                break;
            default: 
                printf("Invalidoperation\n");
                break;
        }
    }

    return 0;
}