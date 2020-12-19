// Read the two arrays from the user and merge them and display the elements in sorted order.[Menu Driven]

#include<stdio.h>
#include<stdlib.h>

int a[20], b[20], c[40];
int m, n, p, i, j, temp;

void create();
void display();
void merge();
void sort();

int main()
{
    int choice;
    do
    {
        printf("\n\n-----Menu-----\n\n");
        printf("1. Create");
        printf("\n2. Display");
        printf("\n3. Sort");
        printf("\n4. Merge");
        printf("\n5. Exit");
        printf("\n----------\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: create();
                break;
            case 2: display();
                break;
            case 3: sort();
                break;
            case 4: merge();
                break;
            case 5: exit(0);
                break;
            default:
                printf("\nInvalid Choice.");
                break;
        }
    } 
    while(choice!=6);

    return 0; 
}

void create()
{
    printf("\nEnter the size of the array elements: ");
    scanf("%d", &n);

    printf("\nEnter the elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
}

void display()
{
    int i;
    printf("\nThe array elements are\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }
}

void sort()
{
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("\nAfter sorting the array elements are: \n");
    display();
}

void merge()
{
    printf("\nEnter the size of second array: ");
    scanf("%d", &m);

    printf("\nEnter the elements for second array: \n");
    for(i=1; i<m; i++)
    {
        scanf("%d",&b[i]); 
    }
    for(i=0, j=0; i<n; i++, j++)
    {
        c[j] = a[i];
    }

    for(i=0; i<m; i++, j++)
    {
        c[j] = b[i];
    }
    p = n + m;
    printf("\nArray elements after merging are\n");
    for(i=0; i<p; i++)
    {
        printf("%d\t",c[i]);
    }
}