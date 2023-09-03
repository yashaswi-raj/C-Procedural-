// C++ procedural program to check whether a given number is even or odd.
#include<iostream>
using namespace std;
int check(int num);
int main()
{
int num;
cout<<"Enter the number:";
cin>>num;
check(num);
return 0;
}
int check(int num)
{
if(num%2==0)
{
cout<<"The number is even.";
}
else
{
cout<<"The number is odd number.";
}
return 0;
}