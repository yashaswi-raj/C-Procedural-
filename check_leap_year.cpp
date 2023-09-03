// C++ procedural program to check whether a given year is leap year or not.
#include<iostream>
using namespace std;
int main()
{
int year;
cout<<"Input the year:";
cin>>year;
if(year%400==0)
{
cout<<year<<" is a Leap Year.";
}
else if(year%4==0 && year%100!=0)
{
cout<<year<<" is a Leap Year.";
}
else
{
cout<<year<<" is not a Leap Year.";
}
return 0;
}