# Arrays-Strings
This repository contains experiments 7, 8 which are related to __Arrays & Strings__ in C++.

# Arrays
# EXPERIMENT 7, 7.1:
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

In C++, an array is a collection of elements of the same data type stored in contiguous memory locations. Arrays allow easy access to multiple elements using an index, starting from 0. The size of an array is fixed at the time of declaration and cannot be changed.

For example:

`int numbers[5] = {1, 2, 3, 4, 5};`

Here, `numbers` is an array of 5 integers. Arrays can be single-dimensional (like a list) or multi-dimensional (like a matrix). Arrays are useful for managing large amounts of data efficiently but lack dynamic resizing.

~~~
CODE:
//Experiment 7
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

//Experiment 7.1
//Program 1 (Display array)
#include<iostream>
using namespace std;
int main()
{
    int s,i,j;
    cout<<"Enter the number of elements you want to enter : ";
    cin>>s;
    int a[s];
    for(i=0;i<=s-1;i++)
    {
        cout<<"Enter element no "<<i+1<<" ";
        cin>>a[i];
    }
    cout<<"The elements of the array are: ";
    for(j=0;j<=s-1;j++)
    {
    cout<<a[j];
    }
    return 0;
}

//Program 2 (Print reverse array)
#include<iostream>
using namespace std;
int main()
{
    int s,i,j;
    cout<<"Enter the number of elements you want to enter : ";
    cin>>s;
    int a[s];
    for(i=0;i<=s-1;i++)
    {
        cout<<"Enter element no "<<i+1<<" ";
        cin>>a[i];
    }
    cout<<"The reversed elements of the array are: ";
    for(j=s-1;j>=0;j--)
    {
    cout<<" "<<a[j];
    }
    return 0;
}

//Program 3 (To search the position of an element in an array.)
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
            cout<<"The position of the element is: "<<i<<endl;
        }
    }
}

//Program 4 (To find the sum and average of a given array.)
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

//Program 5 (To find maximum and minimum element in an array.)
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

//Program 6 (Number of occurences)
#include<iostream>
using namespace std;
int main()
{
     int n, i, j, s, c = 0, flag = 0;
cout << "Enter the number of elements: ";
cin >> n;
int a[n];
cout << "Enter array elements: ";
for( i = 0; i<n ; i++)
{
    cin >> a[i];
}
cout << "Enter an element to be searched in an array: ";
    cin >> s;
for (j= 0 ; j<n; j++)
{
    if ( a[j]==s)
    {
cout<< "The element"<<" "<< s<< " " << "is present at location: "<<j<<endl;
c++;
flag =1;
    }
}

if( flag ==0)
{
    cout<< "The element"<< " "<< s << " "<< "is not present in the given array";
}
else
{
    cout << "The element" << " "<< s << " "<< "occurs"<< " "<< c << " "<< "times.";
}
return 0;
}
~~~

# Conclusion
In this experiment we leant about strings and made programs based on strings to concatenate, reverse it, etc.

We also learn about arrays in C++, how to find out position of elements, min and max value in an array, etc.

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

### Program 1 (Display array)
![image](https://github.com/user-attachments/assets/bd78bf2c-da0c-4454-a87e-6f680d6369a3)

### Program 2 (Display reversed array)
![image](https://github.com/user-attachments/assets/1575e4ba-6cdf-4dc7-9fdc-af0da12ee1cb)

### Program 3 (Search Elements):
![image](https://github.com/user-attachments/assets/16f51e09-257b-467d-b643-a5d5a7daa9e7)

### Program 4 (Sum and Average of elements):
![image](https://github.com/user-attachments/assets/6d8d8b19-8402-4f28-88d1-32d4b1c6f365)

### Program 5 (Min and max value in an array):
![image](https://github.com/user-attachments/assets/95712dc5-2ab6-42d6-b979-49d7a2a14d80)

### Program 6 (Occurences)
![image](https://github.com/user-attachments/assets/70bbbad7-c1c2-4ac8-8e30-eec417917a39)
