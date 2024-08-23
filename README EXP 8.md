# Arrays-Strings
This repository contains experiments 7, 8 which are related to __Arrays & Strings__ in C++.

# Arrays
# EXPERIMENT 8:
## Aim: 
To study and implement 2D Arrays (Matrices)
## Theory:
In C++, an array is a collection of elements of the same data type stored in contiguous memory locations. Arrays allow easy access to multiple elements using an index, starting from 0. The size of an array is fixed at the time of declaration and cannot be changed.

For example:

`int numbers[5] = {1, 2, 3, 4, 5};`

Here, `numbers` is an array of 5 integers. Arrays can be single-dimensional (like a list) or multi-dimensional (like a matrix). Arrays are useful for managing large amounts of data efficiently but lack dynamic resizing.

~~~
CODE:

//Program 1 (To display a matrix.)
#include<iostream>
using namespace std;
int main()
{
    int i, j, row, col;
    cout<<"Enter the rows: ";
    cin>>row;
    cout<<"Enter the columns: ";
    cin>>col;
        int arr[row][col];
        for (i=0;i<row;i++)
        {
            for (j=0;j<col;j++)
            {
                cout<<"Enter elements("<<i<<","<<j<<")";
                cin>>arr[i][j];
            }
        }
        for (i=0;i<row;i++)
        {
            for (j=0;j<col;j++)
            {
                cout<<arr[i][j];
            }
            cout<<endl;
        }
}

//Program 2 (To find the sum and multiplication of a user input matrix.)
#include<iostream>
using namespace std;
int main()
{
    int i, j, k, row, col, r1, c1, r2, c2;
   cout<<"Enter the rows and columns: ";
   cin>>r1>>c1;
   int arr1[r1][c1];
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cout<<"Enter the elements ("<<i<<","<<j<<")";
            cin>>arr1[i][j];
        }
    }
    cout<<"Enter the rows and columns: ";
    cin>>r2>>c2;
    int arr2[r2][c2];
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            cout<<"Enter the elements ("<<i<<","<<j<<")";
            cin>>arr2[i][j];
        }
    }
    //Sum of 2 matrices.
    int sum[r1][c1];
    cout<<"Sum of the 2 matrices is: \n";
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
          sum[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    //Multiplication of 2 matrices.
    int mul[r1][c2];
    cout<<"Multiplication of the 2 matrices is: \n";
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
          mul[i][j]=0;
          for(k=0;k<c1;k++)
          {
              mul[i][j]+=arr1[i][k]+arr2[k][j];
          }
        }
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            cout<<mul[i][j]<<" ";
        }
        cout<<endl;
    } 
}

//Program 3 (To add diagonal elements of a matrix.)
