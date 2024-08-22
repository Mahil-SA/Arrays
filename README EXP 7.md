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
   
3. Concatenation: Combines two strings.

   `str1 + str2;`
   
5. Accessing Characters: Uses the `[]` operator.

   `char ch = str[0];`
   
7. Substrings: Extracts a part of the string.

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

//Program 4 (Find whether a string is a palindrome or not)
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

# Conclusion
In this experiment we leant about strings and made programs based on strings to concatenate, reverse it, etc.

# Outputs

## Experiment 7:

### Program 1 (Display a string):
![image](https://github.com/user-attachments/assets/b5085652-0cf8-4da8-b556-36aed52a763b)

### Program 2 (Concatenate 2 strings):
![image](https://github.com/user-attachments/assets/d9bd3c87-6347-4e3e-a2a7-840a32cd5f36)

### Program 3 (Reverse a string):
![image](https://github.com/user-attachments/assets/01ac948b-f4da-488a-ac73-3150db06b5d8)

### Program 4 (Check if a string is a palindrome):
![image](https://github.com/user-attachments/assets/0b713aa7-d72e-4bd9-b6c5-972b2628fd6e)

## Experiment 7.1:

### Program 1 (Search Elements):
![image](https://github.com/user-attachments/assets/df94ac37-0990-4a54-9104-25962aa4730c)

### Program 2 (Sum and Average of elements):
![image](https://github.com/user-attachments/assets/6d8d8b19-8402-4f28-88d1-32d4b1c6f365)

### Program 3 (Min and max value in an array):
![image](https://github.com/user-attachments/assets/95712dc5-2ab6-42d6-b979-49d7a2a14d80)
