//Experiment 7 - To study and implement C++ Arrays and Strings.
//Name - Mahil Anthony
//PRN -  23070123080
//Batch -  ENTC B1

//Program 1 (Display user input of a string)
#include<iostream>
using namespace std;
int main()
{
    string a;
    cout<<"Enter the string you want: ";
    cin>>a;
    cout<<a<<endl;
}

//Output
/*
Enter the string you want: Mahil
Mahil
*/

//Program 2 (Concatenate 2 strings)
#include<iostream>
using namespace std;
int main()
{
    string a, b;
    cout<<"Enter the first name: ";
    cin>>a;
    cout<<"Enter last name: ";
    cin>>b;
    cout<<a+b<<endl;
}

//Output
/*
Enter the first name: Mahil
Enter last name: Anthony
MahilAnthony
*/

//Program 3 (Reverse a string)
#include<iostream>
using namespace std;
int main()
{
    string a;
    int n;
    cout<<"Enter the first name: ";
    cin>>a;
    n=a.length();
    for(int i=n-1;i>=0;i--)
    {
    cout<<a[i];
    }
    return 0;
}



//Program 4 (Find wether a string is a palindrome or not)
#include<iostream>
using namespace std;
int main()
{
    string a, m;
    int n, i;
    cout<<"Enter the first name: ";
    cin>>a;
    n=a.length();
    for(i=n-1;i>=0;i--)
    {
        cout<<a[i];
        m += a[i]; 
    }
    if (a == m)
        {
            cout<<"\nThe entered string is a palindrome.";
        }
        else
        {
            cout<<"\nThe entered string is not a palindrome.";
        }
    return 0;
}

//Output
/*
Enter the first name: Mahil
lihaM
The entered string is not a palindrome.
*/

//Experiment 7.1
//Arrays

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

//Output
/*
Enter the number of arrays: 2
Enter the elements of the array: 1 2
Enter the elements to be searced: 2
1
*/

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

//Output
/*
Enter the number of arrays: 4
Enter the elements of the array: 1 4 6 8
The sum of the given array is 19
The average of the elements in the given array is 4.75
*/

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

//Output
/*
Enter the number of arrays: 4
Enter the elements of the array: 1 4 7 6
The minimum value of the array is: 1
The maximum value of the array is: 7
*/
