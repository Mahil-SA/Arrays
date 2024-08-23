//Experiment 8 - To study and implement C++ 2D Array - Matrices
//Name - Mahil Anthony
//PRN -  23070123080
//Batch -  ENTC B1

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

//Output
/*
Enter the rows: 2
Enter the columns: 2
Enter elements(0,0)1
Enter elements(0,1)2
Enter elements(1,0)3
Enter elements(1,1)4
12
34
*/

//Program 2 (Take 2 matrices and perform addition and multiplication.)
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
    if (i==j)
    {
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
    }
    else
    {
        cout<<"The entered matrix cannot be added!";
    }
    //Multiplication of 2 matrices.
    if (c2==r1)
    {
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
    else
    {
        cout<<"Entered matrix cannot be multiplied!"; 
    }
}

//Output
/*
Enter the rows and columns: 2 3
Enter the elements (0,0)1
Enter the elements (0,1)2
Enter the elements (0,2)3
Enter the elements (1,0)4
Enter the elements (1,1)5
Enter the elements (1,2)6
Enter the rows and columns: 3 2
Enter the elements (0,0)1
Enter the elements (0,1)2
Enter the elements (1,0)3
Enter the elements (1,1)4
Enter the elements (2,0)5
Enter the elements (2,1)6
The entered matrix cannot be added!Multiplication of the 2 matrices is: 
15 18 
24 27
*/

//Program 3 (To add diagonal elements of a matrix.)


//Output
/*

*/
