// C++ procedural program to print prime numbers less than 10.
#include <iostream>
using namespace std;
int primenumber(int);
int primenumber(int num) 
{
int n=0;
for(int i=2;i<(num/2+1);i++)
{
if(num%i==0)
{
n++;
break;
}
}
if(n==0)
{
cout<<num<<" ";
}
return 0;
}
int main()
{
int x=10;
cout<<"Prime numbers less than "<<x<<" are: "<<"\n";
for(int i=2;i<x+1;i++)
{
primenumber(i);
}
return 0;
}