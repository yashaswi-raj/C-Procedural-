// C++ procedural program to solve the equation (x^2 + n)/(y - 1)^3.
#include <iostream>
#include <cmath>
double solveEquation(double x, double y, double n) 
{
return (pow(x, 2) + n) / pow(y - 1, 3);
}

int main() 
{
double x, y, n;
std::cout << "Enter the value of x: ";
std::cin >> x;
std::cout << "Enter the value of y: ";
std::cin >> y;
std::cout << "Enter the value of n: ";
std::cin >> n;
double result = solveEquation(x, y, n);
std::cout << "Result: " << result << std::endl;
return 0;
}

