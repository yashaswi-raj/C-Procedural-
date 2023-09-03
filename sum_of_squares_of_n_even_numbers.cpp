// C++ procedural program to find the sum of squares of n even numbers.
#include<iostream>
using namespace std;
int sumOfSquaresOfEvenNumbers(int n) {
int sum=0;
for(int i=1;i<=n;++i) 
{
sum+=(2*i)*(2*i); 
}
return sum;
}

int main() 
{
int n;
cout<<"Enter the value of n: ";
cin>>n;
int result=sumOfSquaresOfEvenNumbers(n);
cout<<"Sum of squares of the first " << n << " even numbers: " <<result<<endl;
return 0;
}

