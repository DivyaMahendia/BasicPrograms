// Calculating Factorial of a number using Recursion.

#include<iostream>
using namespace std;

int fact(int x)
{
    if(x==1)
        return 1;
    else
        return x*fact(x-1);
}
int main()
{
  int n;
  cout<<"Enter a number\t";
  cin>>n;
  cout<<"Factorial is : "<<fact(n);

}
