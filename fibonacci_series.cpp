// C++ procedural program to print fibonacci series upto n terms.
#include<iostream>
using namespace std;
int fibo(int n);
int main()
{
int n,i=0;
cout<<"Enter th number of terms:";
cin>>n;
cout<<"THE FIBONNACI SERIES IS -\n";
while(i<n)
{
cout<<" "<<fibo(i);
i++;
}
return 0;
}
int fibo(int n)
{
if(n<=1)
{
return n;
}
else
{
return fibo(n-1)+fibo(n-2);
}
}