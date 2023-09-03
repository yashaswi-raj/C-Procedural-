// C++ program to find the sum of n natural numbers.
#include<iostream>
using namespace std;
int sumofn(int n);
int main()
{
int n;
cout <<"Enter a number of terms: "; 
cin>>n;
sumofn(n);
return 0;
}
int sumofn(int n)
{
int sum,i;
sum=0;
for(i=1;i<=n;i++) 
sum+=i;
cout<<"The sum of first "<<n<<" natural numbers is:"<<sum;
return 0;
}