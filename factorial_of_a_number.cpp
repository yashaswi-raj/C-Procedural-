// C++ procedural program to find factorial of a given number.
#include <iostream>
using namespace std;
int factorial(int n);
int main() 
{
int n;
cout<<"Enter the number:";
cin>>n;
factorial(n);
return 0;
}
int factorial(int n)
{
int i,a=1;
for(i=1;i<=n;i++)
{
a=a*i;
}
cout<<"The factorial of the number is: "<<a;
return 0;
}