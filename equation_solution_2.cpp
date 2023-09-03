// C++ procedural program to evaluate the expression: a+a*r+a*r^2+a*r^3+⋯+a*r^n.
#include <iostream>
#include <cmath>
double sumOfGeometricSeries(double a, double r, int n)
{
double sum = 0;
for (int i = 0; i <= n; ++i) 
{
sum += a * pow(r, i);
}
return sum;
}
int main()
{
double a, r;
int n;
std::cout << "Enter the value of 'a': ";
std::cin >> a;
std::cout << "Enter the value of 'r': ";
std::cin >> r;
std::cout << "Enter the value of 'n': ";
std::cin >> n;
double result = sumOfGeometricSeries(a, r, n);
std::cout << "Sum of the geometric series: " << result << std::endl;
return 0;
}

