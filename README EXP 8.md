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

//Program 3 (To add diagonal elements of a matrix.)
#include<iostream>
using namespace std;
int main()
{
int i, j, r1, c1, sum1=0, sum2=0;
cout<<"Enter the number of rows and columns of the matrix: ";
cin>>r1>>c1;
int arr1[r1][c1];
if(r1!=c1)
{
    cout<<"Error! The number of rows must be equal to the number or columns!"<<endl;
}
else
{
    for(i=0;i<r1;i++)
    {
        for (j=0;j<c1;j++)
        {
            cout<<"Enter the elements ("<<i<< "," <<j<<"): ";
            cin>>arr1[i][j];
        }
    }
    for(i=0; i<r1; i++)
    {
        for (j=0 ; j<c1 ; j++)
        {
            if(i==j)
            {
                sum1 += arr1[i][j];
            }
            if (i+j == r1-1)
            sum2 += arr1[i][j];
        }
    }
    cout<< "Sum of diagonal elements are: "<<sum1<<endl;
    cout<<"Sum of diagonal elements are: "<<sum2<<endl;
}
}
~~~

## Conclusion
In C++ we have learnt to add, multiply and add diagonal elements of matrix while taking their user input.

## Outputs

## Program 1 (To display a matrix.)
![image](https://github.com/user-attachments/assets/73da204b-0998-458c-8ff0-b5f37c63ca10)

## Program 2 (To add and multiply a matrix.)
![image](https://github.com/user-attachments/assets/4a4b8f56-1ce2-49a9-a3a8-aa8d160eaaa5)

## Program 3 (To add diagonal elements of the matrix.)
![image](https://github.com/user-attachments/assets/d9875b61-b65d-43f2-a382-366a07e03e67)
