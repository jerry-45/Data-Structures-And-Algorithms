// Write a program to perform the Matrix addition, Multiplication and Transpose Operation. [Menu Driven]

#include<stdio.h>
#include<stdlib.h>

void display(int[][3]);

int main()
{
    int c;
    void func1();
    void func2();
    void func3();
    void func4();

    do
    {
        printf("\n---------- Matrix Manipulation Function (for 3X3 Matric) ----------\n");
        printf("-----------------------------------------------------------------------");
        printf("\n1. Matrix Addition");
        printf("\n2. Matrix Subtraction");
        printf("\n3. Matrix Multiplication");
        printf("\n4. Transpose of Matrix");
        printf("\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&c);

        switch (c)
        {
        case 1: func1();
            break;
        case 2: func2();
            break;
        case 3: func3();
            break;
        case 4: func4();
            break;
        case 5: exit(0);
            break;
        default:
            printf("\nInvalid Choice.");
            break;
        }
    }
    while (c!=6);

    return 0;
}

void func1()
{
    int x[3][3], y[3][3],z[3][3];
    void getmatrix(int[][3]);
    void addition(int[][3], int[][3], int[][3]);

    printf("\nEnter the elements of matrix 1:\n\n");
    getmatrix(x);
    printf("\nEnter the elements of matrix 2:\n\n");
    getmatrix(y);

    addition(x, y, z);

    printf("\nMatrix 1:- \n");
    display(x);
    printf("\nMatrix 2:- \n");
    display(y);
    printf("\nAddition of Matrix (Result):- \n");
    display(z);
}

void getmatrix(int t[][3])
{
    int i, j;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Enter element[%d][%d]: ",i+1, j+1);
            scanf("%d",&t[i][j]);
        }
    }
}

void addition(int p[][3], int q[][3], int r[][3])
{
    int i, j;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            r[i][j] = p[i][j] + q[i][j];
        }
    }
}

void func2()
{
    int x[3][3], y[3][3],z[3][3];
    void getmatrix(int[][3]);
    void subtraction(int[][3], int[][3], int[][3]);

    printf("\nEnter the elements of matrix 1:\n\n");
    getmatrix(x);
    printf("\nEnter the elements of matrix 2:\n\n");
    getmatrix(y);

    subtraction(x, y, z);

    printf("\nMatrix 1:- \n");
    display(x);
    printf("\nMatrix 2:- \n");
    display(y);
    printf("\nSubraction of Matrix (Result):- \n");
    display(z);
}

void subtraction(int p[][3], int q[][3], int r[][3])
{
    int i, j;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            r[i][j] = p[i][j] - q[i][j];
        }
    }
}

void func3()
{
    int x[3][3], y[3][3],z[3][3];
    void getmatrix(int[][3]);
    void multiplication(int[][3], int[][3], int[][3]);

    printf("\nEnter the elements of matrix 1:\n\n");
    getmatrix(x);
    printf("\nEnter the elements of matrix 2:\n\n");
    getmatrix(y);

    multiplication(x, y, z);

    printf("\nMatrix 1:- \n");
    display(x);
    printf("\nMatrix 2:- \n");
    display(y);
    printf("\nMatrix Multiplication (Result):- \n");
    display(z);
}

void multiplication(int p[][3], int q[][3], int r[][3])
{
    int i, j, k;
    for(i=0; i<3; i++)                                  // condition i < total row of matrix 1
    {
        for(j=0; j<3; j++)                              // condition i < total col of matrix 1 or i < total row matrix 2
        {
            r[i][j] = 0;
            for(k=0; k<3; k++)                          // condition i < total col of matrix 2
            {
                r[i][j] += p[i][k] * q[k][j];
            }
        }
    }
}

void func4()
{
    int x[3][3], y[3][3];
    void getmatrix(int[][3]);
    void transpose(int[][3], int[][3]);

    printf("\nEnter the elements of matrix 1:\n\n");
    getmatrix(x);

    transpose(x, y);

    printf("\nMatrix 1:- \n");
    display(x);
    printf("\nTranspose of Matrix (Result):- \n");
    display(y);
}

void transpose(int p[][3],int q[][3])
{
    int i,j; 
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            q[i][j]=p[j][i];
    }
}

void display(int m[][3])
{
    int i, j;
    printf("\n\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d\t", m[i][j]);
        }
        printf("\n\n");
    }
}