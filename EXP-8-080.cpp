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


//Output
/*

*/
