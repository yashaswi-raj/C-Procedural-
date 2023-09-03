/* C++ procedural program to find the difference between sums of all even position elements 
and sums of all odd position elements from given an array of size ‘n’.*/
#include <iostream>
using namespace std;
int main() 
{
int n;
cout << "Enter the size of the array: ";
cin >> n;
if (n <= 0) {
cout << "Invalid array size." << endl;
return 1;
}
int arr[n];
cout << "Enter the elements of the array: ";
for (int i = 0; i < n; i++) {
cin >> arr[i];
}
int evenSum = 0;
int oddSum = 0;
for (int i = 0; i < n; i++) {
if (i % 2 == 0) {
evenSum += arr[i];
}
else {
oddSum += arr[i];
}
}
int difference = evenSum - oddSum;
cout << "Difference between sums of even-positioned and odd-positioned elements: " << difference << endl;
return 0;
}


