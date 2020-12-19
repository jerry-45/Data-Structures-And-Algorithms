// Write a program to implement Tower of Hanoi problem.

#include<stdio.h>

void towers(int,char,char,char); 

int main()
{
    int num;
    printf("Enter the number of disks:"); 
    scanf("%d",&num);
    printf("The sequence of moves involved in the Tower of Hanoi are:\n"); 
    towers(num,'A','C','B'); 
    return 0;
}

void towers(int num,char fromtower,char totower,char auxtower)
{
    if(num==1)  
    {
        printf("\nMoved is k1 from tower %c totower %c",fromtower,totower); 
        return;
    }
    towers(num-1,fromtower,auxtower,totower);
    printf("\nMoved is k %d from tower %c to tower %c",num,fromtower,totower); 
    towers(num-1,auxtower,totower,fromtower);
}

