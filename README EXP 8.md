# Arrays-Strings
This repository contains experiments 7, 8 which are related to __Arrays & Strings__ in C++.

# Arrays
# EXPERIMENT 8:
## Aim: 
To study and implement C++ Arrays and Strings
## Theory:
In C++, an array is a collection of elements of the same data type stored in contiguous memory locations. Arrays allow easy access to multiple elements using an index, starting from 0. The size of an array is fixed at the time of declaration and cannot be changed.
For example:
`int numbers[5] = {1, 2, 3, 4, 5};`
Here, `numbers` is an array of 5 integers. Arrays can be single-dimensional (like a list) or multi-dimensional (like a matrix). Arrays are useful for managing large amounts of data efficiently but lack dynamic resizing.

~~~
CODE:

//Program 1 (To search the position of an element in an array.)
#include<iostream>
using namespace std;
int main()
{
    int n,b;
    cout<<"Enter the number of arrays: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the elements to be searced: ";
    cin>>b;
    for(int i=0;i<n;i++)
    {
        if(a[i]==b)
        {
            cout<<i;
        }
    }
}

//Program 2 (To find the sum and average of a given array.)
#include<iostream>
using namespace std;
int main()
{
    int n,b;
    float sum=0;
    float avg=0;
    cout<<"Enter the number of arrays: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        sum=a[i]+sum;
    }
    cout<<"The sum of the given array is "<<sum<<endl;
    {
        avg=sum/n;
    }
    cout<<"The average of the elements in the given array is "<<avg<<endl;
}

//Program 3 (To find maximum and minimum element in an array.)
#include<iostream>
using namespace std;
int main()
{
    int n,b;
    cout<<"Enter the number of arrays: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int max=a[0], min=a[0];
    for(int i=0;i<n;i++)
    {
        if(min>a[i])
        {
            min = a[i];
        }
    }
    cout<<"The minimum value of the array is: "<<min<<endl;

    for(int i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max = a[i];
        }
    }
    cout<<"The maximum value of the array is: "<<max<<endl;
    return 0;
}
~~~
