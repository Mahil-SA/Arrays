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
