// C++ procedural program to solve the equation: n!/(r!*(n-r)!).
#include<iostream>
using namespace std;
int comb(int n,int r)
{
if(n<r)
{
return 0;
}
if(r==0)
{
return 1;
}
if(r==1)
{
return n;
}
if(n==1){
return 1;
}
return comb(n-1,r-1)+comb(n-1,r);
}
int main()
{
int n;
int r;
cout<<"Input the value of 'n' :";
cin>>n;
cout<<"Input the value of 'r' :";
cin>>r;
cout<<"The solution of the given equation is: "<<comb(n,r)<<endl;
return 0;
}


