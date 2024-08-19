# Arrays-Strings
This repository contains experiments 7, 8 which are related to __Arrays & Strings__ in C++.

# Arrays
# EXPERIMENT 7:
## Aim: 
To study and implement C++ Arrays and Strings
## Theory:
In C++, strings are sequences of characters represented by the `std::string` class, which provides various functionalities for handling text.
Key operations of strings include:

1. Length: Returns the number of characters in the string.
   `str.length();`
2. Concatenation: Combines two strings.
   `str1 + str2;`
3. Accessing Characters: Uses the `[]` operator.
   `char ch = str[0];`
4. Substrings: Extracts a part of the string.
   `str.substr(start, length);`
Strings in C++ are dynamic, meaning they can grow or shrink in size as needed, making them powerful for text manipulation.

~~~
CODE:

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
~~~
