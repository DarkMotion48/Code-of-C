/**

author:	©LoneWolfDON

**/
/*
6. Create a class called 'Matrix' containing constructor that initializes the number of rows
and the number of columns of a new Matrix object.
i. Then user will input the elements of a matrix object.
ii. Print the square of the given matrix
*/
#include<bits/stdc++.h>
using namespace std;

class Matrix
{
public:
    int row , column;

    Matrix(int r, int c)
    {
        row=r;
        column=c;
    }
    friend void matrixsq(int row, int column);
};

void matrixsq (int row, int column)
{
   int a[row][column],c[row][column];
    int i, j, k, sum=0;

    cout<<"Enter the Elements of A =\n";

    for(i=0;i<row;i++)
    {
        for (j=0;j<column;j++)
            cin>>a[i][j];
    }

    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            for(k=0;k<column;k++)
            {
                sum=sum+a[i][k]*a[k][j];
            }
            c[i][j]=sum;
            sum=0;
        }
    }

    cout<<"A^2=\n";

    for(i=0;i<row;i++)
    {
            for(j=0;j<column;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    Matrix obj(3,3);
    matrixsq(3,3);
}
