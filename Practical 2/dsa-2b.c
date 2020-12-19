// Write a program to search the elements in the linked list and display the same

#include<stdio.h>
#include<conio.h>
#include<stdlib.h> 
#include<malloc.h>

struct node
{
    int data; 
    struct node*next;
}first,*nw; 

int search(int);

int main()
{
    int no,i,item,pos;
    first.next=NULL; 
    nw=&first;
    printf("Enter total number of nodes: "); 
    scanf("%d",&no); 
    printf("\n"); 
    for(i=0;i<no;i++)
    {
        nw->next=(struct node*)malloc(sizeof(struct node)); 
        printf("Enter element in node %d:",i+1); 
        scanf("%d",&nw->data); 
        nw=nw->next;
    }
    nw->next=NULL;
    printf("Linked list is:\n"); 
    nw=&first; 
    while(nw->next!=NULL)
    {
        printf("%d\t",nw->data); 
        nw=nw->next;
    }
    printf("\n"); 
    printf("Enter item to be searched:"); 
    scanf("%d",&item); 
    pos=search(item); 
    if(pos<=no) 
        printf("Your item is at node=%d",pos);
    else
        printf("Sorry! your item is not in linked list.");
    
    return 0;
}

int search(int item)
{
    int count=1; 
    nw=&first; 
    while(nw->next!=NULL)
    {
        if(nw->data==item)
            break;
        else
            count++; nw=nw->next;
    }   
    return count;
}