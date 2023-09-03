// C++ procedural program to find the product of prime numbers less than n. 
#include <iostream>
using namespace std;
bool isPrime(int num) 
{
if (num <= 1) 
{
return false;
}
for (int i = 2; i * i <= num; i++)
{
if (num % i == 0) 
{
return false;
}
}
return true;
}
long long productOfPrimesLessThanN(int n) 
{
long long product = 1;
for (int i = 2; i < n; i++) 
{
if (isPrime(i)) 
{
product *= i;
}
}
return product;
}

int main() 
{
int n;
cout << "Enter a positive integer 'n': ";
cin >> n;
if (n <= 2) 
{
cout << "There are no prime numbers less than " << n << endl;
} 
else 
{
long long result = productOfPrimesLessThanN(n);
cout << "Product of prime numbers less than " << n << " is: " << result << endl;
}
return 0;
}

