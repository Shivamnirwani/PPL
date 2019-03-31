/*
Week 1 #1
Write a C program to check whether a number is even or odd using ternary operator.
*/

#include <iostream>
using std::cin;
using std::cout;

int main(){
	int a;
	cout << "Enter a number: ";
	cin >> a;
	
	(a%2==0)? cout << "Number is Even!": cout << "Number is Odd!";
	return 0;
}
