// Calculating Factorial of a number.

#include<iostream>
using namespace std;
int main()
{
  int n, fact=1;
  cout<<"Enter a number\t";
  cin>>n;
  for(int i=1;i<=n;i++)
  {
       fact= fact*i;

  }
   cout<<"Factorial is : "<<fact;
   return 0;

}
