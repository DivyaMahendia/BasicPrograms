//Program to check if a string is palindrome or not.
//A palindrome is a word or a string that reads the same backward and forward.

#include<iostream>
#include<string.h>
#include <stdio.h>

using namespace std;

int main()
{
    char str[80];
    int i, j, len, flag ;
    cout<<"Enter a String\n";
    gets(str);
    for(len=0; str[len]!='\0'; ++len)
        flag = 1;
    for(i=0,j=len-1; i<len/2; ++i,--j)
    {
        if(str[i]!=str[j])
        {
            flag=0;
            break;
        }
    }
    if(flag)
        cout<<"It is Palindrome\n";
    else
        cout<<"It is not a Palindrome\n";
    return 0;
}
